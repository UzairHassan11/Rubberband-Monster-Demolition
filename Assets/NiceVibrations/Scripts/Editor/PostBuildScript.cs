using UnityEditor;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using UnityEngine;
using UnityEditor.iOS.Xcode;
using UnityEditor.iOS.Xcode.Extensions;
using System.IO;

namespace Lofelt.NiceVibrations
{
    class PostBuildScript : IPostprocessBuildWithReport
    {
        public int callbackOrder { get { return 0; } }
        public void OnPostprocessBuild(BuildReport report)
        {
            // Add iOS framework to Build Phases > Embed Frameworks of the Xcode project generated by Unity
            if (report.summary.platform == BuildTarget.iOS)
            {
                Debug.Log("Nice Vibrations: adding framework to Embed Frameworks list of project at"
                + report.summary.outputPath);

                string xcodeProjectPath = PBXProject.GetPBXProjectPath(report.summary.outputPath);

                PBXProject proj = new PBXProject();
                proj.ReadFromString(File.ReadAllText(xcodeProjectPath));
                string targetGUID = proj.GetUnityMainTargetGuid();

                const string frameworkFolderXcodeProjectPath = "NiceVibrations/Plugins/iOS";
                const string frameworkName = "LofeltHaptics.framework";
                string pathToFramework = Path.Combine(frameworkFolderXcodeProjectPath, frameworkName);

                string fileGUID = proj.AddFile(pathToFramework, "Frameworks/" + pathToFramework, PBXSourceTree.Sdk);
                PBXProjectExtensions.AddFileToEmbedFrameworks(proj, targetGUID, fileGUID);

                proj.SetBuildProperty(targetGUID, "LD_RUNPATH_SEARCH_PATHS", "$(inherited) @executable_path/Frameworks");//If there is no such sentence, the operation will crash and report the image not found error
                proj.WriteToFile(xcodeProjectPath);

                Debug.Log("Nice Vibrations: Adding framework done!");

            }
        }
    }
}
