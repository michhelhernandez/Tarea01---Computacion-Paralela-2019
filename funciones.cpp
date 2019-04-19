#include <string>

void mayuscula(std::string &s) //convierte un string a un string con letras mayusculas
{
    for (int i=0;i<s.length();i++)
        s[i]= toupper(s[i]);
}

int es_variable_entorno(std::string s) //verifica si el string es una variable de entorno en linux
{
    std::string nom_ve[52];
    nom_ve[0]="CLUTTER_IM_MODULE";
    nom_ve[1]="LS_COLORS";
    nom_ve[2]="LESSCLOSE";
    nom_ve[3]="XDG_MENU_PREFIX";
    nom_ve[4]="LANG";
    nom_ve[5]="DISPLAY";
    nom_ve[6]="GNOME_SHELL_SESSION_MODE";
    nom_ve[7]="COLORTERM";
    nom_ve[8]="DESKTOP_AUTOSTART_ID";
    nom_ve[9]="USERNAME";
    nom_ve[10]="XDG_VTNR";
    
    nom_ve[11]="SSH_AUTH_SOCK";
    nom_ve[12]="XDG_SESSION_ID";
    nom_ve[13]="USER";
    nom_ve[14]="DESKTOP_SESSION";
    nom_ve[15]="QT4_IM_MODULE";
    nom_ve[16]="TEXTDOMAINDIR";
    nom_ve[17]="GNOME_TERMINAL_SCREEN";
    nom_ve[18]="PWD";
    nom_ve[19]="HOME";
    nom_ve[20]="TEXTDOMAIN";
    
    nom_ve[21]="SSH_AGENT_PID";
    nom_ve[22]="QT_ACCESSIBILITY";
    nom_ve[23]="XDG_SESSION_TYPE";
    nom_ve[24]="XDG_DATA_DIRS";
    nom_ve[25]="XDG_SESSION_DESKTOP";
    nom_ve[26]="GTK_MODULES";
    nom_ve[27]="WINDOWPATH";
    nom_ve[28]="TERM";
    nom_ve[29]="SHELL";
    nom_ve[30]="VTE_VERSION";
    
    nom_ve[31]="QT_IM_MODULE";
    nom_ve[32]="XMODIFIERS";
    nom_ve[33]="IM_CONFIG_PHASE";
    nom_ve[34]="XDG_CURRENT_DESKTOP";
    nom_ve[35]="GPG_AGENT_INFO";
    nom_ve[36]="GNOME_TERMINAL_SERVICE";
    nom_ve[37]="XDG_SEAT";
    nom_ve[38]="SHLVL";
    nom_ve[39]="LANGUAGE";
    nom_ve[40]="GDMSESSION";
    
    nom_ve[41]="GNOME_DESKTOP_SESSION_ID";
    nom_ve[42]="LOGNAME";
    nom_ve[43]="DBUS_SESSION_BUS_ADDRESS";
    nom_ve[44]="XDG_RUNTIME_DIR";
    nom_ve[45]="XAUTHORITY";
    nom_ve[46]="XDG_CONFIG_DIRS";
    nom_ve[47]="PATH";
    nom_ve[48]="SESSION_MANAGER";
    nom_ve[49]="LESSOPEN";
    nom_ve[50]="GTK_IM_MODULE";
    nom_ve[51]="_";
    
    for(int i=0;i<52;i++)
    {
        if (s==nom_ve[i])
            return 1;    
    }
    
    return 0;
}
