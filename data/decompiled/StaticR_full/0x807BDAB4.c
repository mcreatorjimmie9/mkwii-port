/* Function at 0x807BDAB4, size=148 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_807BDAB4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807BDABC
    r3 = *(0x198 + r3); // lwz @ 0x807BDAC0
    r3 = *(0 + r3); // lwz @ 0x807BDAC4
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807BDACC
    /* clrlwi r0, r3, 0x18 */ // 0x807BDAD0
    r4 = *(0 + r4); // lwz @ 0x807BDAD4
    /* mulli r0, r0, 0x248 */ // 0x807BDAD8
    /* li r3, 0x10 */ // 0x807BDADC
    r5 = *(0x14 + r4); // lwz @ 0x807BDAE0
    /* li r4, 0 */ // 0x807BDAE4
    r5 = r5 + r0; // 0x807BDAE8
    r0 = *(0xc8 + r5); // lwz @ 0x807BDAEC
    if (==) goto 0x0x807bdb08;
    r0 = *(0x208 + r5); // lbz @ 0x807BDAF8
    if (!=) goto 0x0x807bdb08;
    /* li r4, 1 */ // 0x807BDB04
    if (==) goto 0x0x807bdb18;
    r3 = *(0xc8 + r5); // lwz @ 0x807BDB10
    /* b 0x807bdb38 */ // 0x807BDB14
    r0 = *(0x8c + r5); // lwz @ 0x807BDB18
    if (==) goto 0x0x807bdb38;
    /* mulli r0, r0, 0x1c */ // 0x807BDB24
    /* lis r3, 0 */ // 0x807BDB28
    r3 = r3 + 0; // 0x807BDB2C
    r3 = r3 + r0; // 0x807BDB30
    r3 = *(4 + r3); // lwz @ 0x807BDB34
    r0 = *(0x14 + r1); // lwz @ 0x807BDB38
    return;
}