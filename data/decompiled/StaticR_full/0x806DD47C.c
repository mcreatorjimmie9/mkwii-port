/* Function at 0x806DD47C, size=72 bytes */
/* Stack frame: 0 bytes */

void FUN_806DD47C(int r3, int r5, int r6)
{
    r0 = *(0x174 + r3); // lwz @ 0x806DD47C
    /* lis r6, 0 */ // 0x806DD480
    r6 = r6 + 0; // 0x806DD484
    if (>) goto 0x0x806dd4e8;
    /* lis r5, 0 */ // 0x806DD490
    /* slwi r0, r0, 2 */ // 0x806DD494
    r5 = r5 + 0; // 0x806DD498
    /* lwzx r5, r5, r0 */ // 0x806DD49C
    /* mtctr r5 */ // 0x806DD4A0
    /* bctr  */ // 0x806DD4A4
    /* lfs f1, 4(r6) */ // 0x806DD4A8
    /* b 0x806dd4ec */ // 0x806DD4AC
    /* lfs f1, 0x120(r6) */ // 0x806DD4B0
    /* b 0x806dd4ec */ // 0x806DD4B4
    /* lfs f1, 0x124(r6) */ // 0x806DD4B8
    /* b 0x806dd4ec */ // 0x806DD4BC
    /* lfs f1, 0x128(r6) */ // 0x806DD4C0
}