set builder="D:/Games/Steam/steamapps/common/Arma 3 Tools/AddonBuilder/AddonBuilder.exe"
set source="/Coding/GitHub Repos/Darts Commando Gear"
set destination="D:/Games/Steam/steamapps/common/Arma 3/Local Mods/Darts Commando Gear/addons"
set include="C:\Coding\GitHub Repos\KeeliCompanyAux\addons\Tools\addon_includes.txt"
set binarize="D:\Games\Steam\steamapps\common\Arma 3 Tools\Binarize\binarize.exe"

%builder% %source%/DAC_Armors %destination% -include=%include% -binarize=%binarize%
%builder% %source%/DAC_Weapons %destination% -include=%include% -binarize=%binarize%
%builder% %source%/DAC_Items %destination% -include=%include% -binarize=%binarize%
%builder% %source%/DAC_Functions %destination% -include=%include% -binarize=%binarize%