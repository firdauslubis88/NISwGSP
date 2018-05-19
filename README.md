# NISwGSP
C++ implementation of the ECCV 2016 paper, Natural Image Stitching with the Global Similarity Prior (Windows Visual Studio 15.7 Version)

### Attention please!!
1. This project is not mine, I solely just port it to the Visual Studio 15.7. So, if you use any code or data from this project, please cite the original author work:
```
@INPROCEEDINGS{Chen:2016:NIS,
	AUTHOR		= {Yu-Sheng Chen and Yung-Yu Chuang},
	TITLE		= {Natural Image Stitching with the Global Similarity Prior}, 
	YEAR		= {2016},
	MONTH		= {October},
	BOOKTITLE	= {Proceedings of European Conference on Computer Vision (ECCV 2016)},
	PAGES		= {V186--201},
	LOCATION	= {Amsterdam},
}
```
2. Therefore, if you have any questions regarding the content (algorithm or data) or there is some feature in the project that is not clear (how to run your own image for example), please refer to the original author github at https://github.com/nothinglo/NISwGSP :D
3. However, if you have any problems with the porting to Visual Studio, feel free create issues here. I actually have not tried to test this git outside my working PC so it is possible the steps I write here miss several details.
4. I do not fork the original author git directly. I cloned it (anyway, I actually cloned the ubuntu version at https://github.com/Yannnnnnnnnnnn/NISwGSP), then ported it in my pc, then init the github repository, then upload my local work to the github.

### How to set it up
*You need to have opencv (the original author used 3.0 version but I used the 3.4 version) and dirent for windows. My opencv is built with cuda and many local dependencies so I think it will probably not working in your PC even though if I share the binary files here. As for dirent, I think (I actually already forgot how I got it) you can clone it from https://github.com/tronkko/dirent
*I upload the VLfeat 0.9.20 (similar version as used by the original author) and eigen (sorry, I forgot the detail version, but I think it is 3.3. A different version from the one used by the original author (3.2.7)) in this git. So, you should not need to install it by your own. Please note that in the following steps I will assume that you (actually, you must) use/locate the VLfeat and eigen folder inside the NISwGSP project folder. This is because the cpp and h files refer the VLfeat and eigen library locally.
*So, the installation steps are:
1. clone this git.
2. Prepare your opencv and dirent folder in your PC.
3. Open the NISwGSP.sln using Visual Studio (I use 15.7 version, I do not know whether it will work with other 15 version (it should though) or even with 2015 or 2013 (I think it also should work))
4. In your Visual Studio, make sure that you choose Release x64 as configuration and platform respectively. This is the mode I am working. I am not sure whether it will work with other configuration or platform or not. You can try it yourself
5. Then, right click the NISwGSP project and choose "properties" menu to open the project properties window
6. In the project properties window, go to "C/C++" -> "General" -> "additional include directories". You can see 3 entries there. Those are the location of: include folder of opencv, the NISwGSP.vcxproj, and include folder of dirent respectively. Please modify it as necessary depends on your opencv, project, and dirent folder location in your PC
7. Still in project properties window, go to "Linker" -> "Input" -> "additional dependencies". You can see 2 entries there: opencv 3.4 lib and VLfeat lib file path respectively. As step 5, modify it as necessary. Please do not confuse about opencv_340.lib. If you download from the opencv site or you build the opencv_world by yourself, then you can have that file. However, if you only have separate opencv_*.lib files, that will also work. I am not sure in detail which module is being used by NISwGSP project though. Put all your opencv_*.lib to the "additional dependencies" will not hurt though :D. And also note that eigen and dirent is header only library so they don't have the corresponding .lib or .dll. It means you don't need to worry about them in this step
8. Still in your project properties, go to "General" -> "Output Directory". That defines the location of your executable file. After you know the specific location, open the location in your windows explorer. Copy all your opencv_*.dll files and vl.dll and msvcr100.dll to that location (basically, the resulting project .exe file should locate in the same directory as opencv_*.dll, vl.dll, and msvcr100.dll files). You can get the vl.dll and msvcr100.dll from the NISwGSP\vlfeat-0.9.20\bin\win64 folder of your clone location. Note that win64 is for the 64 bit. So, if you try to use the 32 bit version, may be you should copy the corresponding file located in win32.
9. Build your project. Just press "CTRL + Shift + B" or right click again to the project and choose "Build" menu. Let's hope you will not get any error. For the next step, I assume that you succeed to build it.
10. Before you test the resulting .exe file, you need to download the sample image test [Input-42-data] from http://www.cmlab.csie.ntu.edu.tw/project/stitching-wGSP/input-42-data.zip. Extract the image test zip file. Then, copy the "input-42-data" folder in the same location as the executable files (it means, your project build .exe, opencv_*.dll, vl.dll, msvcr100.dll files and "input-42-data" folder are now in same location). Please note that the "input-42-data" folder must be the direct parent of the list of folder testing image (e.g., "AANAP-building", "AANAP-roundabout", "AANAP-skyline", etc folder).
11. Open the exe file location in your preferred terminal. I usually use command window. Run, for example "NISwGSP.exe AANAP-building" and enjoy the result!! :D. To test another folder, just change the argument to the .exe file e.g. "NISwGSP.exe AANAP-roundabout", "NISwGSP.exe AANAP-skyline", etc.
12. HAPPY CODING and CHEERS!!! :D

### ERROR: This application failed to start because VCOMP100.dll wast not found. Re-installing the program may fix the this problem.
This happens when your PC/laptop does not have Microsoft Visual C++ 2010 Service Pack 1 Reditributable Package MFC Security Update (https://www.lifewire.com/how-to-fix-vcomp100-dll-not-found-or-missing-errors-2624174). To solve this problem, please install the corresponding file https://www.microsoft.com/en-us/download/confirmation.aspx?id=26999

### Publication
[Yu-Sheng Chen](http://www.cmlab.csie.ntu.edu.tw/~nothinglo/) and [Yung-Yu Chuang](http://www.csie.ntu.edu.tw/~cyy/).

[National Taiwan University](http://www.ntu.edu.tw)

Natural Image Stitching with Global Similarity Prior. 
Proceedings of European Conference on Computer Vision 2016 (ECCV 2016), Part V, pp. 186-201, October 2016, Amsterdam, Netherland.

### Citation
```
@INPROCEEDINGS{Chen:2016:NIS,
	AUTHOR		= {Yu-Sheng Chen and Yung-Yu Chuang},
	TITLE		= {Natural Image Stitching with the Global Similarity Prior}, 
	YEAR		= {2016},
	MONTH		= {October},
	BOOKTITLE	= {Proceedings of European Conference on Computer Vision (ECCV 2016)},
	PAGES		= {V186--201},
	LOCATION	= {Amsterdam},
}
```
### Reference

> 1. *Chang, C.H., Sato, Y., Chuang, Y.Y.: Shape-preserving half-projective warps for image stitching. In: Proceedings of the 2014 IEEE Conference on Computer Vision and Pattern Recognition. pp. 3254-3261. CVPR'14 (2014)*
> 2. *Gao, J., Kim, S.J., Brown, M.S.: Constructing image panoramas using dual-homography warping. In: Proceedings of the 2011 IEEE Conference on Computer Vision and Pattern Recognition. pp. 49-56. CVPR'11 (2011)*
> 3. *Lin, C., Pankanti, S., Ramamurthy, K.N., Aravkin, A.Y.: Adaptive as-natural-as-possible image stitching. In: IEEE Conference on Computer Vision and Pattern Recognition, CVPR 2015, Boston, MA, USA, June 7-12, 2015. pp. 1155-1163 (2015)*
> 4. *Nomura, Y., Zhang, L., Nayar, S.K.: Scene collages and flexible camera arrays. In: Proceedings of the 18th Eurographics Conference on Rendering Techniques. pp. 127-138. EGSR'07 (2007)*
> 5. *Zaragoza, J., Chin, T.J., Brown, M.S., Suter, D.: As-projective-as-possible image stitching with moving dlt. In: Proceedings of the 2013 IEEE Conference on Computer Vision and Pattern Recognition. pp. 2339-2346. CVPR'13 (2013)*

### Original Author Contact
Feel free to contact the original author if there is any question (Yu-Sheng Chen nothinglo@cmlab.csie.ntu.edu.tw).
