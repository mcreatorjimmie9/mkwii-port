/* Function at 0x807A3D88, size=64 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_807A3D88(int r3, int r6)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807A3D90
    r0 = *(0x8a5 + r3); // lbz @ 0x807A3D94
    if (!=) goto 0x0x807a3da8;
    /* li r3, 0 */ // 0x807A3DA0
    /* b 0x807a3dc0 */ // 0x807A3DA4
    r3 = *(0x5bc + r3); // lwz @ 0x807A3DA8
    /* li r6, 0 */ // 0x807A3DAC
    r3 = r3 + 0xc; // 0x807A3DB0
    FUN_805E3430(r3, r6, r3); // bl 0x805E3430
    /* cntlzw r0, r3 */ // 0x807A3DB8
    /* srwi r3, r0, 5 */ // 0x807A3DBC
    r0 = *(0x14 + r1); // lwz @ 0x807A3DC0
}