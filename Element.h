﻿/*yuansu.h
 * 低精度的元素周期库
 * UTF-8
*/
#include <QObject>
#include <QTranslator>
struct YuanSu
{
        int Z;//原子序数（质子数）
        char Symobl[3];//元素符号
        double Standard_atomic_weights;//相对分子质量
        bool NoStandardAtomicWeight;
}YS_gz[112] = {
{1,"H",1.008,false},
{2,"He",4.003,false},
{3,"Li",6.941,false},
{4,"Be",9.012,false},
{5,"B",10.81,false},
{6,"C",12.01,false},
{7,"N",14.01,false},
{8,"O",16,false},
{9,"F",19,false},
{10,"Ne",20.18,false},
{11,"Na",22.99,false},
{12,"Mg",24.31,false},
{13,"Al",26.98,false},
{14,"Si",28.09,false},
{15,"P",30.97,false},
{16,"S",32.06,false},
{17,"Cl",35.45,false},
{18,"Ar",39.95,false},
{19,"K",39.10,false},
{20,"Ca",40.08,false},
{21,"Sc",44.96,false},
{22,"Ti",47.87,false},
{23,"V",50.94,false},
{24,"Cr",52,false},
{25,"Mn",54.94,false},
{26,"Fe",55.85,false},
{27,"Co",58.93,false},
{28,"Ni",58.69,false},
{29,"Cu",63.55,false},
{30,"Zn",65.41,false},
{31,"Ga",69.72,false},
{32,"Ge",72.64,false},
{33,"As",74.92,false},
{34,"Se",78.96,false},
{35,"Br",79.90,false},
{36,"Kr",83.80,false},
{37,"Rb",85.48,false},
{38,"Sr",87.62,false},
{39,"Y",88.91,false},
{40,"Zr",91.22,false},
{41,"Nb",92.91,false},
{42,"Mo",95.94,false},
{43,"Tc",98.9,true},
{44,"Ru",101.1,false},
{45,"Rh",102.9,false},
{46,"Pd",106.4,false},
{47,"Ag",107.9,false},
{48,"Cd",112.4,false},
{49,"In",114.8,false},
{50,"Sn",118.7,false},
{51,"Sb",121.8,false},
{52,"Te",127.6,false},
{53,"I",126.9,false},
{54,"Xe",131.3,false},
{55,"Cs",132.9,false},
{56,"Ba",137.3,false},
{57,"La",138.9,false},
{58,"Ce",140.1,false},
{59,"Pr",140.9,false},
{60,"Nd",144.2,false},
{61,"Pm",145,true},
{62,"Sm",150.4,false},
{63,"Eu",152.0,false},
{64,"Gd",157.3,false},
{65,"Tb",158.9,false},
{66,"Dy",162.5,false},
{67,"Ho",164.9,false},
{68,"Er",167.3,false},
{69,"Tm",168.9,false},
{70,"Yb",173.0,false},
{71,"Lu",175.0,false},
{72,"Hf",178.5,false},
{73,"Ta",180.9,false},
{74,"W",183.8,false},
{75,"Re",186.2,false},
{76,"Os",190.2,false},
{77,"Ir",192.2,false},
{78,"Pt",195.1,false},
{79,"Au",197.0,false},
{80,"Hg",200.6,false},
{81,"Tl",204.4,false},
{82,"Pb",207.2,false},
{83,"Bi",209.0,false},
{84,"Po",209.0,true},
{85,"At",210.0,true},
{86,"Rn",222.0,true},
{87,"Fr",223.0,true},
{88,"Ra",226.0,true},
{89,"Ac",227.0,true},
{90,"Th",232.0,false},
{91,"Pa",231.0,false},
{92,"U",238.0,false},
{93,"Np",237.0,true},
{94,"Pu",244.0,true},
{95,"Am",243.0,true},
{96,"Cm",247.0,true},
{97,"Bk",247.0,true},
{98,"Cf",251.0,true},
{99,"Es",252.0,true},
{100,"Fm",257.0,true},
{101,"Md",258.0,true},
{102,"No",259.1,true},
{103,"Lr",262.1,true},
{104,"Rf",261.1,true},
{105,"Db",262.1,true},
{106,"Sg",266.1,true},
{107,"Bh",264.1,true},
{108,"Hs",277.2,true},
{109,"Mt",278,true},
{110,"Ds",281,true},
{111,"Rg",282,true},
{112,"Cn",285,true},
};

struct YS_advance{
    int Z;//原子序数（质子数）
    char Symobl[3];//元素符号
    char Mark[7];//IUPAC元素周期表颜色标记，代表该元素的信息准确度,red,yellow,blue,white
    double Default_Upper_atomic_weight;
    double Lower_limit_of_atomic_weight;//red标记用
    int Deviation;
    int Decimal_places;//小数位数
    double Half_time;
    char ElementName_en[14];
    QString ElementName_local;
}YS_IUPAC_Advance_Info[118]={
{1,"H","red",1.00811,1.00784,0,5,0,"hydrogen",{QObject::tr("氢")}},
{2,"He","yellow",4.002602,0,2,6,0,"helium",{QObject::tr("氦")}},
{3,"Li","red",6.997,6.938,0,3,0,"lithium",{QObject::tr("锂")}},
{4,"Be","blue",9.0121831,0,5,7,0,"beryllium",{QObject::tr("铍")}},
{5,"B","red",10.821,10.806,0,3,0,"boron",{QObject::tr("硼")}},
{6,"C","red",12.0116,12.0096,0,4,0,"carbon",{QObject::tr("碳")}},
{7,"N","red",14.00728,14.00643,0,5,0,"nitrogen",{QObject::tr("氮")}},
{8,"O","red",15.99977,15.99903,0,5,0,"oxygen",{QObject::tr("氧")}},
{9,"F","blue",18.998403163,0,6,9,0,"fluorine",{QObject::tr("氟")}},
{10,"Ne","yellow",20.1797,0,6,4,0,"neon",{QObject::tr("氖")}},
{11,"Na","blue",22.98976928,0,2,8,0,"sodium",{QObject::tr("钠")}},
{12,"Mg","red",24.307,24.304,0,3,0,"magnesium",{QObject::tr("镁")}},
{13,"Al","blue",26.9815385,0,7,7,0,"aluminium",{QObject::tr("铝")}},
{14,"Si","red",28.086,28.084,0,3,0,"silicon",{QObject::tr("硅")}},
{15,"P","blue",30.973761998,0,5,9,0,"phosphorus",{QObject::tr("磷")}},
{16,"S","red",32.076,32.059,0,3,0,"sulfur",{QObject::tr("硫")}},
{17,"Cl","red",35.457,35.446,0,3,0,"chlorine",{QObject::tr("氯")}},
{18,"Ar","red",39.963,39.792,0,3,0,"argon",{QObject::tr("氩")}},
{19,"K","yellow",39.0983,0,1,4,0,"potassium",{QObject::tr("钾")}},
{20,"Ca","yellow",40.078,0,4,3,0,"calcium",{QObject::tr("钙")}},
{21,"Sc","blue",44.955908,0,5,6,0,"scandium",{QObject::tr("钪")}},
{22,"Ti","yellow",47.867,0,1,3,0,"titanium",{QObject::tr("钛")}},
{23,"V","yellow",50.9415,0,1,4,0,"vanadium",{QObject::tr("钒")}},
{24,"Cr","yellow",51.9961,0,6,4,0,"chromium",{QObject::tr("铬")}},
{25,"Mn","blue",54.938043,0,2,6,0,"manganese",{QObject::tr("锰")}},
{26,"Fe","yellow",55.845,0,2,3,0,"iron",{QObject::tr("铁")}},
{27,"Co","blue",58.933194,0,4,6,0,"cobalt",{QObject::tr("钴")}},
{28,"Ni","yellow",58.6934,0,4,4,0,"nickel",{QObject::tr("镍")}},
{29,"Cu","yellow",63.546,0,3,3,0,"copper",{QObject::tr("铜")}},
{30,"Zn","yellow",65.38,0,2,2,0,"zinc",{QObject::tr("锌")}},
{31,"Ga","yellow",69.723,0,1,3,0,"gallium",{QObject::tr("镓")}},
{32,"Ge","yellow",72.630,0,8,3,0,"gemanium",{QObject::tr("锗")}},
{33,"As","blue",74.921595,0,6,6,0,"arsenic",{QObject::tr("砷")}},
{34,"Se","yellow",78.971,0,8,3,0,"selenium",{QObject::tr("硒")}},
{35,"Br","red",79.907,79.901,0,3,0,"bromine",{QObject::tr("溴")}},
{36,"Kr","yellow",83.798,0,2,3,0,"krypton",{QObject::tr("氪")}},
{37,"Rb","yellow",85.4678,0,3,4,0,"rubiduim",{QObject::tr("铷")}},
{38,"Sr","yellow",87.62,0,1,2,0,"strontium",{QObject::tr("锶")}},
{39,"Y","blue",88.90584,0,2,5,0,"yttrium",{QObject::tr("钇")}},
{40,"Zr","yellow",91.224,0,2,3,0,"zirconium",{QObject::tr("锆")}},
{41,"Nb","blue",92.90637,0,2,5,0,"niobium",{QObject::tr("铌")}},
{42,"Mo","yellow",95.95,0,1,2,0,"molybdenum",{QObject::tr("钼")}},
{43,"Tc","white",0,0,0,4,98.9072,"technetium",{QObject::tr("锝")}},
{44,"Ru","yellow",101.07,0,2,2,0,"ruthenium",{QObject::tr("钌")}},
{45,"Rh","blue",102.90549,0,2,5,0,"rhodium",{QObject::tr("铑")}},
{46,"Pd","yellow",106.42,0,1,2,0,"palladium",{QObject::tr("钯")}},
{47,"Ag","yellow",107.8682,0,2,4,0,"silver",{QObject::tr("银")}},
{48,"Cd","yellow",112.414,0,4,3,0,"cadmium",{QObject::tr("镉")}},
{49,"In","yellow",114.818,0,1,3,0,"indium",{QObject::tr("铟")}},
{50,"Sn","yellow",118.710,0,7,3,0,"tin",{QObject::tr("锡")}},
{51,"Sb","yellow",121.760,0,1,3,0,"antimony",{QObject::tr("锑")}},
{52,"Te","yellow",127.60,0,3,2,0,"tellurium",{QObject::tr("碲")}},
{53,"I","blue",126.90447,0,3,5,0,"iodine",{QObject::tr("碘")}},
{54,"Xe","yellow",131.293,0,6,3,0,"xenon",{QObject::tr("氙")}},
{55,"Cs","blue",132.90545196,0,6,8,0,"caesium",{QObject::tr("铯")}},
{56,"Ba","yellow",137.327,0,7,3,0,"barium",{QObject::tr("钡")}},
{57,"La","yellow",138.90547,0,7,5,0,"lanthanum",{QObject::tr("镧")}},
{58,"Ce","yellow",140.116,0,1,3,0,"derium",{QObject::tr("铈")}},
{59,"Pr","blue",140.90766,0,1,5,0,"praseodymium",{QObject::tr("镨")}},
{60,"Nd","yellow",144.242,0,3,3,0,"neodymium",{QObject::tr("钕")}},
{61,"Pm","white",0,0,2,1,144.9,"promethium",{QObject::tr("钷")}},
{62,"Sm","yellow",150.36,0,2,2,0,"samarium",{QObject::tr("钐")}},
{63,"Eu","yellow",151.964,0,1,3,0,"europium",{QObject::tr("铕")}},
{64,"Gd","yellow",157.25,0,3,2,0,"gadolinium",{QObject::tr("钆")}},
{65,"Tb","blue",158.925354,0,8,6,0,"terbium",{QObject::tr("铽")}},
{66,"Dy","yellow",162.500,0,1,3,0,"dysprosium",{QObject::tr("镝")}},
{67,"Ho","blue",164.930328,0,7,6,0,"holmium",{QObject::tr("钬")}},
{68,"Er","yellow",167.259,0,3,3,0,"erbium",{QObject::tr("铒")}},
{69,"Tm","blue",168.934218,0,6,6,0,"thulium",{QObject::tr("铥")}},
{70,"Yb","yellow",173.045,0,10,3,0,"ytterbium",{QObject::tr("镱")}},
{71,"Lu","yellow",174.9668,0,1,4,0,"luterbium",{QObject::tr("镥")}},
{72,"Hf","yellow",178.49,0,2,2,0,"hafnium",{QObject::tr("铪")}},
{73,"Ta","yellow",180.94788,0,2,5,0,"tantalum",{QObject::tr("钽")}},
{74,"W","yellow",183.84,0,1,2,0,"tungsten",{QObject::tr("钨")}},
{75,"Re","yellow",186.207,0,1,3,0,"rhenium",{QObject::tr("铼")}},
{76,"Os","yellow",190.23,0,1,2,0,"osmium",{QObject::tr("锇")}},
{77,"Ir","yellow",192.217,0,2,3,0,"iridium",{QObject::tr("铱")}},
{78,"Pt","yellow",195.084,0,9,3,0,"platinum",{QObject::tr("铂")}},
{79,"Au","blue",196.966570,0,4,5,0,"gold",{QObject::tr("金")}},
{80,"Hg","yellow",200.592,0,3,3,0,"mercury",{QObject::tr("汞")}},
{81,"Tl","red",204.385,204.382,0,3,0,"thallium",{QObject::tr("铊")}},
{82,"Pb","yellow",207.2,0,1,1,0,"lead",{QObject::tr("铅")}},
{83,"Bi","blue",208.98040,0,1,5,0,"bismuth",{QObject::tr("铋")}},
{84,"Po","white",0,0,0,4,208.9824,"polonium",{QObject::tr("钋")}},
{85,"At","white",0,0,0,4,209.9871,"astatine",{QObject::tr("砹")}},
{86,"Rn","white",0,0,0,4,222.0176,"radon",{QObject::tr("氡")}},
{87,"Fr","white",0,0,0,4,223.0197,"francium",{QObject::tr("钫")}},
{88,"Ra","white",0,0,0,4,226.0245,"radium",{QObject::tr("镭")}},
{89,"Ac","white",0,0,0,4,227.0277,"actinium",{QObject::tr("锕")}},
{90,"Th","yellow",232.0377,0,4,4,0,"thorium",{QObject::tr("钍")}},
{91,"Pa","blue",231.03588,0,1,5,0,"protactinium",{QObject::tr("镤")}},
{92,"U","yellow",238.02891,0,3,5,0,"uranium",{QObject::tr("铀")}},
{93,"Np","white",0,0,0,4,237.0482,"neptunium",{QObject::tr("镎")}},
{94,"Pu","white",0,0,0,4,239.0642,"plutonium",{QObject::tr("钚")}},
{95,"Am","white",0,0,0,4,243.0614,"americium",{QObject::tr("镅")}},
{96,"Cm","white",0,0,0,4,247.0704,"curium",{QObject::tr("锔")}},
{97,"Bk","white",0,0,0,4,247.0703,"berkelium",{QObject::tr("锫")}},
{98,"Cf","white",0,0,0,4,251.0796,"californium",{QObject::tr("锎")}},
{99,"Es","white",0,0,0,4,252.0830,"einsteinium",{QObject::tr("锿")}},
{100,"Fm","white",0,0,0,4,257.0591,"fermium",{QObject::tr("镄")}},
{101,"Md","white",0,0,0,4,258.0984,"mendelevium",{QObject::tr("钔")}},
{102,"No","white",0,0,0,4,259.1010,"nobelium",{QObject::tr("锘")}},
{103,"Lr","white",0,0,0,4,262.1097,"lawrencium",{QObject::tr("铹")}},
{104,"Rf","white",0,0,0,4,267.1218,"rutherfordium",{QObject::tr("𬬻")}},
{105,"Db","white",0,0,0,4,268.1257,"dubnium",{QObject::tr("𬭊")}},
{106,"Sg","white",0,0,0,4,269.1286,"seaborgium",{QObject::tr("𬭳")}},
{107,"Bh","white",0,0,0,4,274.1436,"bohrium",{QObject::tr("𬭛")}},
{108,"Hs","white",0,0,0,4,277.1519,"hassium",{QObject::tr("𬭶")}},
{109,"Mt","white",0,0,0,0,278,"meitnerium",{QObject::tr("鿏")}},
{110,"Ds","white",0,0,0,0,281,"darmstadtium",{QObject::tr("𫟼")}},
{111,"Rg","white",0,0,0,0,282,"roentgenium",{QObject::tr("𬬭")}},
{112,"Cn","white",0,0,0,0,285,"copernicium",{QObject::tr("鿔")}},
{113,"Nh","white",0,0,0,0,284,"nihonium",{QObject::tr("鿭")}},
{114,"Fi","white",0,0,0,0,289,"flerovium",{QObject::tr("𫓧")}},
{115,"Mc","white",0,0,0,0,288,"moscovium",{QObject::tr("镆")}},
{116,"Lv","white",0,0,0,0,292,"livermorium",{QObject::tr("𫟷")}},
{117,"Ts","white",0,0,0,0,294,"tennessine",{QObject::tr("鿬")}},
{118,"Og","white",0,0,0,0,295,"oganesson",{QObject::tr("鿫")}},
};
