/*
Author: Tristan O'Neil
Program: Encrypts OEcrypt
Arguments: textFile encryptedFile encryptionKey
*/

#include <iostream>
#include <fstream>
#include <string>
#include <bitset>

using namespace std;

string replacement(int ascii);

int main(int argc, char *argv[])
{
    ifstream input;
    ofstream output;

    if (argv[1] != NULL && argv[2] != NULL && argv[3] != NULL)
    {
        string plainTextFile = argv[1];
        string encryptedFile = argv[2];
        string key = argv[3];
        string inputText = "";
        char encryptedTextXOR;
        string encryptedTextReplacement;

        input.open(plainTextFile);
        output.open(encryptedFile);
        if (input.is_open())
        {
            while (!input.eof())
            {
                getline(input, inputText);
                int y = 0;
                for (int x = 0; x < inputText.size(); x++)
                {
                    char decryptedText;
                    encryptedTextXOR = key[y] ^ inputText[x];
                    decryptedText = encryptedTextXOR ^ key[y];
                    encryptedTextReplacement = replacement(static_cast<int>(encryptedTextXOR));
                    output << encryptedTextReplacement;
                    if (key.size()-1 > y)
                    {
                        y++;
                    }
                    else
                    {
                        y = 0;
                    }
                }
            }
        }
    }
    input.close();
    output.close();

    return 0;
}

string replacement(int ascii)
{
    string text = "";
    switch(ascii)
    {
        case 0:
            text = "aa";
            break;
        case 1:
            text = "ab";
            break;
        case 2:
            text = "ac";
            break;
        case 3:
            text = "ad";
            break;
        case 4:
            text = "ae";
            break;
        case 5:
            text = "af";
            break;
        case 6:
            text = "ag";
            break;
        case 7:
            text = "ah";
            break;
        case 8:
            text = "ai";
            break;
        case 9:
            text = "aj";
            break;
        case 10:
            text = "ak";
            break;
        case 11:
            text = "al";
            break;
        case 12:
            text = "am";
            break;
        case 13:
            text = "an";
            break;
        case 14:
            text = "ao";
            break;
        case 15:
            text = "ap";
            break;
        case 16:
            text = "aq";
            break;
        case 17:
            text = "ar";
            break;
        case 18:
            text = "as";
            break;
        case 19:
            text = "at";
            break;
        case 20:
            text = "au";
            break;
        case 21:
            text = "av";
            break;
        case 22:
            text = "aw";
            break;
        case 23:
            text = "ax";
            break;
        case 24:
            text = "ay";
            break;
        case 25:
            text = "az";
            break;
        case 26:
            text = "ba";
            break;
        case 27:
            text = "bb";
            break;
        case 28:
            text = "bc";
            break;
        case 29:
            text = "bd";
            break;
        case 30:
            text = "be";
            break;
        case 31:
            text = "bf";
            break;
        case 32:
            text = "bg";
            break;
        case 33:
            text = "bh";
            break;
        case 34:
            text = "bi";
            break;
        case 35:
            text = "bj";
            break;
        case 36:
            text = "bk";
            break;
        case 37:
            text = "bl";
            break;
        case 38:
            text = "bm";
            break;
        case 39:
            text = "bn";
            break;
        case 40:
            text = "bo";
            break;
        case 41:
            text = "bp";
            break;
        case 42:
            text = "bq";
            break;
        case 43:
            text = "br";
            break;
        case 44:
            text = "bs";
            break;
        case 45:
            text = "bt";
            break;
        case 46:
            text = "bu";
            break;
        case 47:
            text = "bv";
            break;
        case 48:
            text = "bw";
            break;
        case 49:
            text = "bx";
            break;
        case 50:
            text = "by";
            break;
        case 51:
            text = "bz";
            break;
        case 52:
            text = "ca";
            break;
        case 53:
            text = "cb";
            break;
        case 54:
            text = "cc";
            break;
        case 55:
            text = "cd";
            break;
        case 56:
            text = "ce";
            break;
        case 57:
            text = "cf";
            break;
        case 58:
            text = "cg";
            break;
        case 59:
            text = "ch";
            break;
        case 60:
            text = "ci";
            break;
        case 61:
            text = "cj";
            break;
        case 62:
            text = "ck";
            break;
        case 63:
            text = "cl";
            break;
        case 64:
            text = "cm";
            break;
        case 65:
            text = "cn";
            break;
        case 66:
            text = "co";
            break;
        case 67:
            text = "cp";
            break;
        case 68:
            text = "cq";
            break;
        case 69:
            text = "cr";
            break;
        case 70:
            text = "cs";
            break;
        case 71:
            text = "ct";
            break;
        case 72:
            text = "cu";
            break;
        case 73:
            text = "cv";
            break;
        case 74:
            text = "cw";
            break;
        case 75:
            text = "cx";
            break;
        case 76:
            text = "cy";
            break;
        case 77:
            text = "cz";
            break;
        case 78:
            text = "da";
            break;
        case 79:
            text = "db";
            break;
        case 80:
            text = "dc";
            break;
        case 81:
            text = "dd";
            break;
        case 82:
            text = "de";
            break;
        case 83:
            text = "df";
            break;
        case 84:
            text = "dg";
            break;
        case 85:
            text = "dh";
            break;
        case 86:
            text = "di";
            break;
        case 87:
            text = "dj";
            break;
        case 88:
            text = "dk";
            break;
        case 89:
            text = "dl";
            break;
        case 90:
            text = "dm";
            break;
        case 91:
            text = "dn";
            break;
        case 92:
            text = "do";
            break;
        case 93:
            text = "dp";
            break;
        case 94:
            text = "dq";
            break;
        case 95:
            text = "dr";
            break;
        case 96:
            text = "ds";
            break;
        case 97:
            text = "dt";
            break;
        case 98:
            text = "du";
            break;
        case 99:
            text = "dv";
            break;
        case 100:
            text = "dw";
            break;
        case 101:
            text = "dx";
            break;
        case 102:
            text = "dy";
            break;
        case 103:
            text = "dz";
            break;
        case 104:
            text = "ea";
            break;
        case 105:
            text = "eb";
            break;
        case 106:
            text = "ec";
            break;
        case 107:
            text = "ed";
            break;
        case 108:
            text = "ee";
            break;
        case 109:
            text = "ef";
            break;
        case 110:
            text = "eg";
            break;
        case 111:
            text = "eh";
            break;
        case 112:
            text = "ei";
            break;
        case 113:
            text = "ej";
            break;
        case 114:
            text = "ek";
            break;
        case 115:
            text = "el";
            break;
        case 116:
            text = "em";
            break;
        case 117:
            text = "en";
            break;
        case 118:
            text = "eo";
            break;
        case 119:
            text = "ep";
            break;
        case 120:
            text = "eq";
            break;
        case 121:
            text = "er";
            break;
        case 122:
            text = "es";
            break;
        case 123:
            text = "et";
            break;
        case 124:
            text = "eu";
            break;
        case 125:
            text = "ev";
            break;
        case 126:
            text = "ew";
            break;
        case 127:
            text = "ex";
            break;
        case 128:
            text = "ey";
            break;
        case 129:
            text = "ez";
            break;
        case 130:
            text = "fa";
            break;
        case 131:
            text = "fb";
            break;
        case 132:
            text = "fc";
            break;
        case 133:
            text = "fd";
            break;
        case 134:
            text = "fe";
            break;
        case 135:
            text = "ff";
            break;
        case 136:
            text = "fg";
            break;
        case 137:
            text = "fh";
            break;
        case 138:
            text = "fi";
            break;
        case 139:
            text = "fj";
            break;
        case 140:
            text = "fk";
            break;
        case 141:
            text = "fl";
            break;
        case 142:
            text = "fm";
            break;
        case 143:
            text = "fn";
            break;
        case 144:
            text = "fo";
            break;
        case 145:
            text = "fp";
            break;
        case 146:
            text = "fq";
            break;
        case 147:
            text = "fr";
            break;
        case 148:
            text = "fs";
            break;
        case 149:
            text = "ft";
            break;
        case 150:
            text = "fu";
            break;
        case 151:
            text = "fv";
            break;
        case 152:
            text = "fw";
            break;
        case 153:
            text = "fx";
            break;
        case 154:
            text = "fy";
            break;
        case 155:
            text = "fz";
            break;
        case 156:
            text = "ga";
            break;
        case 157:
            text = "gb";
            break;
        case 158:
            text = "gc";
            break;
        case 159:
            text = "gd";
            break;
        case 160:
            text = "ge";
            break;
        case 161:
            text = "gf";
            break;
        case 162:
            text = "gg";
            break;
        case 163:
            text = "gh";
            break;
        case 164:
            text = "gi";
            break;
        case 165:
            text = "gj";
            break;
        case 166:
            text = "gk";
            break;
        case 167:
            text = "gl";
            break;
        case 168:
            text = "gm";
            break;
        case 169:
            text = "gn";
            break;
        case 170:
            text = "go";
            break;
        case 171:
            text = "gp";
            break;
        case 172:
            text = "gq";
            break;
        case 173:
            text = "gr";
            break;
        case 174:
            text = "gs";
            break;
        case 175:
            text = "gt";
            break;
        case 176:
            text = "gu";
            break;
        case 177:
            text = "gv";
            break;
        case 178:
            text = "gw";
            break;
        case 179:
            text = "gx";
            break;
        case 180:
            text = "gy";
            break;
        case 181:
            text = "gz";
            break;
        case 182:
            text = "ha";
            break;
        case 183:
            text = "hb";
            break;
        case 184:
            text = "hc";
            break;
        case 185:
            text = "hi";
            break;
        case 186:
            text = "hj";
            break;
        case 187:
            text = "hk";
            break;
        case 188:
            text = "hl";
            break;
        case 189:
            text = "hm";
            break;
        case 190:
            text = "hn";
            break;
        case 191:
            text = "ho";
            break;
        case 192:
            text = "hp";
            break;
        case 193:
            text = "hq";
            break;
        case 194:
            text = "hr";
            break;
        case 195:
            text = "hs";
            break;
        case 196:
            text = "ht";
            break;
        case 197:
            text = "hu";
            break;
        case 198:
            text = "hv";
            break;
        case 199:
            text = "hw";
            break;
        case 200:
            text = "hx";
            break;
        case 201:
            text = "hy";
            break;
        case 202:
            text = "hz";
            break;
        case 203:
            text = "ia";
            break;
        case 204:
            text = "ib";
            break;
        case 205:
            text = "ic";
            break;
        case 206:
            text = "id";
            break;
        case 207:
            text = "ie";
            break;
        case 208:
            text = "if";
            break;
        case 209:
            text = "ig";
            break;
        case 210:
            text = "ih";
            break;
        case 211:
            text = "ii";
            break;
        case 212:
            text = "ij";
            break;
        case 213:
            text = "ik";
            break;
        case 214:
            text = "il";
            break;
        case 215:
            text = "im";
            break;
        case 216:
            text = "in";
            break;
        case 217:
            text = "io";
            break;
        case 218:
            text = "ip";
            break;
        case 219:
            text = "iq";
            break;
        case 220:
            text = "ir";
            break;
        case 221:
            text = "is";
            break;
        case 222:
            text = "it";
            break;
        case 223:
            text = "iu";
            break;
        case 224:
            text = "iv";
            break;
        case 225:
            text = "iw";
            break;
        case 226:
            text = "ix";
            break;
        case 227:
            text = "iy";
            break;
        case 228:
            text = "iz";
            break;
        case 229:
            text = "ja";
            break;
        case 230:
            text = "jb";
            break;
        case 231:
            text = "jc";
            break;
        case 232:
            text = "jd";
            break;
        case 233:
            text = "je";
            break;
        case 234:
            text = "jf";
            break;
        case 235:
            text = "jg";
            break;
        case 236:
            text = "jh";
            break;
        case 237:
            text = "ji";
            break;
        case 238:
            text = "jj";
            break;
        case 239:
            text = "jk";
            break;
        case 240:
            text = "jl";
            break;
        case 241:
            text = "jm";
            break;
        case 242:
            text = "jn";
            break;
        case 243:
            text = "jo";
            break;
        case 244:
            text = "jp";
            break;
        case 245:
            text = "jq";
            break;
        case 246:
            text = "jr";
            break;
        case 247:
            text = "js";
            break;
        case 248:
            text = "jt";
            break;
        case 249:
            text = "ju";
            break;
        case 250:
            text = "jv";
            break;
        case 251:
            text = "jw";
            break;
        case 252:
            text = "jx";
            break;
        case 253:
            text = "jy";
            break;
        case 254:
            text = "jz";
            break;
        case 255:
            text = "ka";
            break;
        default:
            text = "error";
            break;
    }
    return text;
}
