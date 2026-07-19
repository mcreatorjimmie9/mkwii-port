/* Function at 0x808B845C, size=160 bytes */
/* Stack frame: 48 bytes */
/* Calls: 2 function(s) */

int FUN_808B845C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* lis r3, 0 */ // 0x808B8464
    *(0x34 + r1) = r0; // stw @ 0x808B8468
    /* li r0, 0 */ // 0x808B846C
    *(8 + r1) = r0; // stb @ 0x808B8474
    r3 = *(0 + r3); // lwz @ 0x808B8478
    *(0xc + r1) = r0; // stw @ 0x808B847C
    FUN_806F9214(r4); // bl 0x806F9214
    FUN_808B8268(r4); // bl 0x808B8268
    /* li r7, 0 */ // 0x808B8488
    /* li r5, 0 */ // 0x808B848C
    /* lis r4, 0 */ // 0x808B8490
    /* b 0x808b84c8 */ // 0x808B8494
    r3 = r3 + r5; // 0x808B8498
    r6 = *(0x28 + r3); // lbz @ 0x808B849C
    if (==) goto 0x0x808b84c0;
    r0 = r7 + 1; // 0x808B84A8
    r3 = *(0 + r4); // lwz @ 0x808B84AC
    /* clrlwi r0, r0, 0x18 */ // 0x808B84B0
    /* mulli r0, r0, 0xf0 */ // 0x808B84B4
    r3 = r3 + r0; // 0x808B84B8
    *(0xc24 + r3) = r6; // stw @ 0x808B84BC
    r5 = r5 + 2; // 0x808B84C0
    r7 = r7 + 1; // 0x808B84C4
    r3 = *(0xc + r1); // lwz @ 0x808B84C8
    /* li r0, 0xb */ // 0x808B84CC
    r6 = *(0x26 + r3); // lhz @ 0x808B84D0
    if (>=) goto 0x0x808b84e0;
    r0 = r6;
    /* clrlwi r0, r0, 0x10 */ // 0x808B84E0
    if (<) goto 0x0x808b8498;
    r0 = *(0x34 + r1); // lwz @ 0x808B84EC
    return;
}