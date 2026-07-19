/* Function at 0x805A92DC, size=56 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_805A92DC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x805A92E4
    r0 = *(0x10 + r4); // lhz @ 0x805A92E8
    /* clrlwi. r0, r0, 0x1f */ // 0x805A92EC
    if (==) goto 0x0x805a9308;
    /* li r5, 0x1c0 */ // 0x805A92F4
    r3 = r3 + 8; // 0x805A92F8
    FUN_805E3430(r5, r3); // bl 0x805E3430
    /* li r3, 1 */ // 0x805A9300
    /* b 0x805a930c */ // 0x805A9304
    /* li r3, 0 */ // 0x805A9308
    r0 = *(0x14 + r1); // lwz @ 0x805A930C
}