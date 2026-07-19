/* Function at 0x805B663C, size=76 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_805B663C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    r8 = r3;
    *(0x14 + r1) = r0; // stw @ 0x805B6648
    r0 = *(4 + r3); // lwz @ 0x805B664C
    if (!=) goto 0x0x805b6678;
    r6 = r4;
    r5 = r8 + 0x10; // 0x805B665C
    /* li r3, 0x7ff */ // 0x805B6660
    /* li r4, 0 */ // 0x805B6664
    FUN_805E3430(r6, r5, r3, r4); // bl 0x805E3430
    /* cntlzw r0, r3 */ // 0x805B666C
    /* srwi r3, r0, 5 */ // 0x805B6670
    /* b 0x805b669c */ // 0x805B6674
    r6 = *(0xc + r8); // lwz @ 0x805B6678
    r5 = r4;
    r7 = *(0x5c + r8); // lwz @ 0x805B6680
    /* li r3, 0x7ff */ // 0x805B6684
}