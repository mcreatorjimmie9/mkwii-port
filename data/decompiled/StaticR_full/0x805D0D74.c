/* Function at 0x805D0D74, size=188 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_805D0D74(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* mulli r9, r4, 0x18 */ // 0x805D0D7C
    r10 = r4;
    *(0x14 + r1) = r0; // stw @ 0x805D0D84
    /* li r7, 0 */ // 0x805D0D88
    r4 = r3 + r9; // 0x805D0D8C
    r0 = *(0x5b0 + r4); // lwz @ 0x805D0D90
    if (==) goto 0x0x805d0dcc;
    r8 = *(0x5b8 + r4); // lwz @ 0x805D0D9C
    /* li r4, 0 */ // 0x805D0DA0
    if (>) goto 0x0x805d0dc0;
    /* li r0, 1 */ // 0x805D0DAC
    r0 = r0 << r8; // slw
    /* andi. r0, r0, 0x15 */ // 0x805D0DB4
    if (==) goto 0x0x805d0dc0;
    /* li r4, 1 */ // 0x805D0DBC
    if (==) goto 0x0x805d0dcc;
    /* li r7, 1 */ // 0x805D0DC8
    if (!=) goto 0x0x805d0ddc;
    /* li r3, 0 */ // 0x805D0DD4
    /* b 0x805d0e20 */ // 0x805D0DD8
    r7 = r3 + r9; // 0x805D0DDC
    /* li r4, 1 */ // 0x805D0DE0
    *(0x5bc + r7) = r5; // stw @ 0x805D0DE4
    *(0x5c0 + r7) = r6; // stw @ 0x805D0DE8
    *(0x5b8 + r7) = r4; // stw @ 0x805D0DEC
    r0 = *(0x619 + r3); // lbz @ 0x805D0DF0
    if (==) goto 0x0x805d0e1c;
    *(0x618 + r3) = r4; // stb @ 0x805D0DFC
    /* lis r4, 0 */ // 0x805D0E00
    /* lis r6, 0x1000 */ // 0x805D0E04
    r3 = *(0x584 + r3); // lwz @ 0x805D0E08
    r5 = r10;
    r4 = r4 + 0; // 0x805D0E10
    r6 = r6 + 3; // 0x805D0E14
    FUN_805E3430(r6, r5, r4, r6); // bl 0x805E3430
    /* li r3, 1 */ // 0x805D0E1C
    r0 = *(0x14 + r1); // lwz @ 0x805D0E20
    return;
}