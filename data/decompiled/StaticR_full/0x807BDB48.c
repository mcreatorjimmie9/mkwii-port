/* Function at 0x807BDB48, size=132 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_807BDB48(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807BDB50
    r3 = *(0x198 + r3); // lwz @ 0x807BDB54
    r3 = *(0 + r3); // lwz @ 0x807BDB58
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807BDB60
    /* clrlwi r0, r3, 0x18 */ // 0x807BDB64
    r4 = *(0 + r4); // lwz @ 0x807BDB68
    /* mulli r0, r0, 0x248 */ // 0x807BDB6C
    /* li r3, 0x14 */ // 0x807BDB70
    r5 = *(0x14 + r4); // lwz @ 0x807BDB74
    /* li r4, 0 */ // 0x807BDB78
    r5 = r5 + r0; // 0x807BDB7C
    r0 = *(0xc8 + r5); // lwz @ 0x807BDB80
    if (==) goto 0x0x807bdb9c;
    r0 = *(0x208 + r5); // lbz @ 0x807BDB8C
    if (!=) goto 0x0x807bdb9c;
    /* li r4, 1 */ // 0x807BDB98
    if (==) goto 0x0x807bdbac;
    r3 = *(0xcc + r5); // lwz @ 0x807BDBA4
    /* b 0x807bdbbc */ // 0x807BDBA8
    r0 = *(0x8c + r5); // lwz @ 0x807BDBAC
    if (==) goto 0x0x807bdbbc;
    r3 = r0;
    r0 = *(0x14 + r1); // lwz @ 0x807BDBBC
    return;
}