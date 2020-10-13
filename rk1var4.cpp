#include <iostream>
#include <string>
#include <algorithm>
void swap1(float& a, float& b) {
    float k = a;
    a = b;
    b = k;
}
void swap2(char& a, char& b) {
    char k = a;
    a = b;
    b = k; 
}
int main() {
    int yes = 0;
    std::string  str = "VRQWFBVRPP CQ NIB RN FRQE QUIMB - CB BRWFQ FNSOMRNDF, BFRA\n"
        "QUCMCB RNS XMFRB QWCPPQ BI IOBQDIMF IUUINFNBQ RNS TCN BHF XRAF.\n"
        "BHFMF'Q AIMF BI VRQWFBVRPP BHRN KOQB R DIOMB, R VRPP RNS R MFLFMFF.\n"
        "HFMF RMF QIAF CNBFMFQBCNX LRDBQ EIO UMIVRVPE SIN'B WNIT RVIOB BHF\n"
        "QUIMB IL VRQWFBVRPP. 1. KRAFQ NRCQACBH CNYFNBFS VRQWFBVRPP. RQWFS\n"
        "CN 1891 BI CNYFNB RN CNSIIM TCNBFM RDBCYCBE VE HCQ VIQQ RB R EADR CN\n"
        "QUMCNXLCFPS, ARQQRDHOQFBBQ, KRAFQ NRCQACBH CQ DMFSCBFS RQ BHF\n"
        "LIONSFM IL VRQWFBVRPP. NRCQACBH, R UHEQCDRP FSODRBCIN BFRDHFM, RPQI\n"
        "TMIBF BHF IMCXCNRP VRQWFBVRPP MOPF VIIW RNS LIONSFS BHF ONCYFMQCBE\n"
        "IL WRNQRQ VRQWFBVRPP UMIXMRA. 2. VRQWFBVRPP TRQ UPREFS TCBH R\n"
        "SCLLFMFNB VRPP. RQ VCGRMMF RQ CB QIONSQ, VRQWFBVRPP TRQ IMCXCNRPPE\n"
        "UPREFS TCBH R QIDDFM VRPP RNS UFRDH VRQWFBQ, TCBH MFLFMFFQ HRYCNX\n"
        "BI MFBMCFYF BHF VRPP FRDH BCAF R UPREFM ARSF R VRQWFB. CN 1900, BHF\n"
        "QBMCNX VRQWFBQ TF WNIT BISRE TFMF CNBMISODFS BI BHF XRAF RNS, PRBFM,\n"
        "VRDWVIRMSQ TFMF RBBRDHFS BI UMFYFNB QUFDBRBIMQ LMIA VPIDWCNX R\n"
        "QHIB. 3. SMCVVPCNX TRQN'B RPPITFS. UPREFMQ NFYFM DIOPS RSYRNDF BHF\n"
        "VRPP. CNQBFRS, FRDH UPREFM HRS BI BHMIT CB LMIA THFMFYFM HF DROXHB\n"
        "CB. BHF LCMQB BFRA DMFSCBFS TCBH RSYRNDCNX BHF VRPP VE SMCVVPCNX\n"
        "CB UPREFS RB ERPF CN 1897, RNS BHF ILLCDCRP RPPITRNDF LIM BHF SMCVVPF,\n"
        "KOQB INF UFM UIQQFQQCIN RB LCMQB, TFMF RSIUBFS LIOM EFRMQ PRBFM.\n"
        "RNIBHFM CAUIMBRNB VRQWFBVRPP AIYF, BHF QPRA SONW, TRQ VRNNFS KOQB\n"
        "VFLIMF BHF 1967-1968 QFRQIN ONBCP BHF 1976-1977 QFRQIN. 4. AIMF UPREFMQ\n"
        "UFM QCSF. BHF NOAVFM IL UPREFMQ UFM QCSF TRQ NFYFM QUFDCLCFS.\n"
        "NRCQACBH CNYFNBFS RN CNSIIM TCNBFM RDBCYCBE RNS TRNBFS R XRAF\n"
        "LPFZCVPF FNIOXH BI CNDPOSF THIFYFM TRNBFS BI UPRE. LIM R THCPF, BHF\n"
        "BIBRP NOAVFM IL UPREFMQ TRQ R SFLROPB 18, NCNF UFM QCSF, BHF QRAF\n"
        "NOAVFM BHRB QHITFS OU LIM BHF YFME LCMQB XRAF. 5. LIOPQ UPREFS.\n"
        "QHIOPSFMCNX, HIPSCNX, UOQHCNX, BMCUUCNX IM IBHFMTCQF QBMCWCNX RN\n"
        "IUUINFNB TRQ NFYFM RPPITFS. HITFYFM, QODH ILLFNQFQ TFMF NFYFM\n"
        "DINQCSFMFS LIOPQ ONBCP 1910, TCBH BHF RSYFNB IL R MOPF SCQJORPCLECNX\n"
        "R UPREFM LIM DIAACBBCNX LIOM IL BHFA. BHRB BIBRP TRQ MRCQFS BI LCYF CN\n"
        "1946, CN BHF CNROXOMRP MOPFQ IL BHF VRQWFBVRPP RQQIDCRBCIN IL\n"
        "RAFMCDR (BHF IMCXCNRP NRAF IL BHF NRBCINRP VRQWFBVRPP RQQIDCRBCIN),\n"
        "RNS BI QCZ BHF NFZB EFRM.\n";
    std::cout << "Hello there! Here we are given an encrypted text. Let's figure out how can we solve this cipher!\n" << std::endl;
    std::cout << str << std::endl;
    std::cout << "First of all, let's decide, do u want to observe the final version of the text or do u want to solve the cipher by yourself? \n"<<std::endl;
    std::cout << "Enter 1 if u want to solve the cipher by yourself and enter 2 if u want to see final result:\n";
    std::cin >> yes;
    if (yes == 1) {
        char a;
        char b;
        int c = 1;
        while (c == 1) {
            std::cout << "Enter the letter you want to change:\n";
            std::cin >> b;
            std::cout << "Enter the decrypted letter:\n";
            std::cin >> a;
            for (int i = 0; i < str.size(); i++) {
                if (str[i] == b)
                    str.replace(i, 1, 1, a);
            }
            std::cout << str << std::endl;
            std::cout << "Do u want to change another letter? \n 1 - yes\n 0 - no" << std::endl;
            std::cin >> c;
        }  
    }
    else {
        float arr1[26];
        char arr2[26];
        int count = 0;
        int x = 0;
        for (int i = 0; i < str.size(); i++) {
            if (static_cast<char>(str[i]) == '.' || static_cast<char>(str[i]) == ',' || static_cast<char>(str[i]) == ' ' || static_cast<char>(str[i]) == '"' || static_cast<char>(str[i]) == '-' ||
                static_cast<char>(str[i]) == '0' || static_cast<char>(str[i]) == '1' || static_cast<char>(str[i]) == '2' || static_cast<char>(str[i]) == '3' || static_cast<char>(str[i]) == '4' ||
                static_cast<char>(str[i]) == '5' || static_cast<char>(str[i]) == '6' || static_cast<char>(str[i]) == '7' || static_cast<char>(str[i]) == '8' || static_cast<char>(str[i]) == '9')
            {
                count++;
            }
        }
        for (char a = 'A'; a <= 'Z'; a++) {
            float c = 0.;
            for (int i = 0; i < str.size(); i++) {
                if (a == str[i])
                    c++;
            }
            arr1[x] = (c / (str.size() - count)) * 100;
            arr2[x] = a;
            x++;
        }
        for (int a = 0; a < 25; a++) {
            for (int i = 0; i < 25; i++) {
                if (arr1[i] > arr1[i + 1]) {
                    swap1(arr1[i], arr1[i + 1]);
                    swap2(arr2[i], arr2[i + 1]);
                }
            }
        }
        std::cout << "\n\nFrequency of every letter in this text:\n";
        for (int i = 25; i >= 0; i--)
        std::cout << std::endl << arr2[i] << " = " << arr1[i] << " %";
        std::cout << std::endl << std::endl;
        std::cout << "The decrypted text is:\n\n";
        for (int i = 0; i < str.length(); i++) {
            switch (str[i]) {
            case 'A':
                str.replace(i, 1, "M");
                break;
            case 'B':
                str.replace(i, 1, "T");
                break;
            case 'C':
                str.replace(i, 1, "I");
                break;
            case 'D':
                str.replace(i, 1, "C");
                break;
            case 'E':
                str.replace(i, 1, "Y");
                break;
            case 'F':
                str.replace(i, 1, "E");
                break;
            case 'G':
                str.replace(i, 1, "Z");
                break;
            case 'H':
                str.replace(i, 1, "H");
                break;
            case 'I':
                str.replace(i, 1, "O");
                break;
            case 'J':
                str.replace(i, 1, "Q");
                break;
            case 'K':
                str.replace(i, 1, "J");
                break;
            case 'L':
                str.replace(i, 1, "F");
                break;
            case 'M':
                str.replace(i, 1, "R");
                break;
            case 'N':
                str.replace(i, 1, "N");
                break;
            case 'O':
                str.replace(i, 1, "U");
                break;
            case 'P':
                str.replace(i, 1, "L");
                break;
            case 'Q':
                str.replace(i, 1, "S");
                break;
            case 'R':
                str.replace(i, 1, "A");
                break;
            case 'S':
                str.replace(i, 1, "D");
                break;
            case 'T':
                str.replace(i, 1, "W");
                break;
            case 'U':
                str.replace(i, 1, "P");
                break;
            case 'V':
                str.replace(i, 1, "B");
                break;
            case 'W':
                str.replace(i, 1, "K");
                break;
            case 'X':
                str.replace(i, 1, "G");
                break;
            case 'Y':
                str.replace(i, 1, "V");
                break;
            case 'Z':
                str.replace(i, 1, "X");
                break;
            }
        }
        std::cout << str << std::endl << std::endl;
        std::cout << "And the key to this cipher is:\n"
            "A = M\n"
            "B = T\n"
            "C = I\n"
            "D = C\n"
            "E = Y\n"
            "F = E\n"
            "G = Z\n"
            "H = H\n"
            "I = O\n"
            "J = Q\n"
            "K = J\n"
            "L = F\n"
            "M = R\n"
            "N = N\n"
            "O = U\n"
            "P = L\n"
            "Q = S\n"
            "R = A\n"
            "S = D\n"
            "T = W\n"
            "U = P\n"
            "V = B\n"
            "W = K\n"
            "X = G\n"
            "Y = V\n"
            "Z = X\n" << std::endl;
    }
    return 0;
}
