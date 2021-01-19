##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=WorkSpaceTemplate
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :="C:/Users/DAN/Desktop/C++ Development/Frank Tutorial/WorkSpaceTemplate"
ProjectPath            :="C:/Users/DAN/Desktop/C++ Development/Frank Tutorial/WorkSpaceTemplate/WorkSpaceTemplate"
IntermediateDirectory  :=/Users/DAN/Desktop/C++\ Development/Frank\ Tutorial/WorkSpaceTemplate"/build-$(ConfigurationName)//Users/DAN/Desktop/C++\ Development/Frank\ Tutorial/WorkSpaceTemplate/WorkSpaceTemplate
OutDir                 :=/Users/DAN/Desktop/C++\ Development/Frank\ Tutorial/WorkSpaceTemplate"/build-$(ConfigurationName)//Users/DAN/Desktop/C++\ Development/Frank\ Tutorial/WorkSpaceTemplate/WorkSpaceTemplate
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=DAN
Date                   :=10/01/2021
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS := -std=c++14 -Wall -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=../build-$(ConfigurationName)/WorkSpaceTemplate/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/WorkSpaceTemplate/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\WorkSpaceTemplate" mkdir "..\build-$(ConfigurationName)\WorkSpaceTemplate"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\WorkSpaceTemplate" mkdir "..\build-$(ConfigurationName)\WorkSpaceTemplate"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/WorkSpaceTemplate/.d:
	@if not exist "..\build-$(ConfigurationName)\WorkSpaceTemplate" mkdir "..\build-$(ConfigurationName)\WorkSpaceTemplate"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/WorkSpaceTemplate/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/WorkSpaceTemplate/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/DAN/Desktop/C++ Development/Frank Tutorial/WorkSpaceTemplate/WorkSpaceTemplate/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/WorkSpaceTemplate/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/WorkSpaceTemplate/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/WorkSpaceTemplate/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/WorkSpaceTemplate/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/WorkSpaceTemplate/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/WorkSpaceTemplate//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


