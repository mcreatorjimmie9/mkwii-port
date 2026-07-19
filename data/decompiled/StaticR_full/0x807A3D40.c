/* Function at 0x807A3D40, size=64 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_807A3D40(int r3, int r6)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807A3D48
    r0 = *(0x8a5 + r3); // lbz @ 0x807A3D4C
    if (!=) goto 0x0x807a3d60;
    /* li r3, 0 */ // 0x807A3D58
    /* b 0x807a3d78 */ // 0x807A3D5C
    r3 = *(0x5bc + r3); // lwz @ 0x807A3D60
    /* li r6, 0 */ // 0x807A3D64
    r3 = r3 + 0xc; // 0x807A3D68
    FUN_805E3430(r3, r6, r3); // bl 0x805E3430
    /* cntlzw r0, r3 */ // 0x807A3D70
    /* srwi r3, r0, 5 */ // 0x807A3D74
    r0 = *(0x14 + r1); // lwz @ 0x807A3D78
}