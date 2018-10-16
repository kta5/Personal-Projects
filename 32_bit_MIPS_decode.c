#include <stdio.h>
//This program checks whether or not a 32-bit binary number is an R-type, I-type, or J-type MIPS instruction. 

int main(){
    //int hexVal = 0x00400000;
    unsigned int hexVal = 0x02345678;
    //unsigned int hexVal = 0x32345648;
    //unsigned int hexVal = 0x08400000;

    unsigned int newValue = hexVal >> 26;
    printf("%s, %d\n", "OPCODE: ", newValue);

    if (newValue == 0){ //Checks for R-type
        unsigned int subRS = hexVal << 6;
        unsigned int subRS2 = subRS >> 27;
        printf("%s, %d\n", "RS: ", subRS2);
        //d->regs.r.rs = subRS2;

        unsigned int subRT = hexVal << 11;
        unsigned int subRT2 = subRT >> 27;
        printf("%s, %d\n", "RT: ", subRT2);


        unsigned int subRD = hexVal << 16;
        unsigned int subRD2 = subRD >> 27;
        printf("%s, %d\n", "RD: ", subRD2);
        // d->regs.r.rd = subRD2; 

        unsigned int subSHAMT = hexVal << 21;
        unsigned int subSHAMT2 = subSHAMT >> 27;
        printf("%s, %d\n", "SHAMT: ", subSHAMT2);
        // d->regs.r.shamt = subSHAMT2; 

        unsigned int subFUNCT = hexVal << 26;
        unsigned int subFUNCT2 = subFUNCT >> 26;
        printf("%s, %d\n", "FUNCT: ", subFUNCT2);
    // d->regs.r.funct = subFUNCT; 
    }
    else if (newValue == 2 || newValue == 3){ //Checks for J-type
        unsigned int SUBJ = hexVal << 6;
        unsigned int SUBJ2 = SUBJ >> 6;
        printf("%s, %d\n", "Address: ", SUBJ2); 
    // d->regs.r.funct = subFUNCT; 
    }
    else{ //Checks for J-type
        unsigned int subRS = hexVal << 6;
        unsigned int subRS2 = subRS >> 27;
        printf("%s, %d\n", "RS: ", subRS2);
        //d->regs.r.rs = subRS2;
        //rVals->R_rs = mips.registers[d->regs.r.rs];

        unsigned int subRT = hexVal << 11;
        unsigned int subRT2 = subRT >> 27;
        printf("%s, %d\n", "RT: ", subRT2);

        unsigned int subIMM = hexVal << 16;
        unsigned int subIMM2 = subIMM >> 16;
        printf("%s, %d\n", "IMM: ", subIMM2);
    }

        

}



