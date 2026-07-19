/* Function at 0x8063D534, size=204 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_8063D534(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 1 */ // 0x8063D53C
    /* li r5, 2 */ // 0x8063D540
    /* li r6, 1 */ // 0x8063D548
    *(0x1c + r1) = r31; // stw @ 0x8063D54C
    *(0x18 + r1) = r30; // stw @ 0x8063D550
    *(0x14 + r1) = r29; // stw @ 0x8063D554
    r29 = r3;
    r3 = *(0x10 + r3); // lwz @ 0x8063D55C
    FUN_805F58E8(); // bl 0x805F58E8
    /* lis r30, 0 */ // 0x8063D564
    r3 = *(0 + r30); // lwz @ 0x8063D568
    r3 = *(0x30 + r3); // lwz @ 0x8063D56C
    FUN_805DDF80(); // bl 0x805DDF80
    r4 = *(0x10 + r29); // lwz @ 0x8063D574
    /* lis r31, 0 */ // 0x8063D578
    r3 = *(0 + r31); // lwz @ 0x8063D57C
    r0 = *(0x68 + r4); // lwz @ 0x8063D580
    /* clrlwi r4, r0, 0x18 */ // 0x8063D584
    FUN_805C14C8(); // bl 0x805C14C8
    r4 = *(0 + r31); // lwz @ 0x8063D58C
    /* clrlwi r3, r3, 0x18 */ // 0x8063D590
    r0 = *(0xb74 + r4); // lwz @ 0x8063D594
    if (!=) goto 0x0x8063d5b0;
    r3 = *(0 + r30); // lwz @ 0x8063D5A0
    r3 = *(0x18 + r3); // lwz @ 0x8063D5A4
    r3 = *(0 + r3); // lwz @ 0x8063D5A8
    r3 = *(0x9c + r3); // lbz @ 0x8063D5AC
    /* lis r31, 0 */ // 0x8063D5B0
    /* extsb r4, r3 */ // 0x8063D5B4
    r3 = *(0 + r31); // lwz @ 0x8063D5B8
    FUN_8070D934(); // bl 0x8070D934
    if (==) goto 0x0x8063d5e4;
    r3 = *(0x10 + r29); // lwz @ 0x8063D5C8
    /* li r4, 0 */ // 0x8063D5CC
    /* li r5, 2 */ // 0x8063D5D0
    /* li r6, 0 */ // 0x8063D5D4
    FUN_805F58E8(r4, r5, r6); // bl 0x805F58E8
    r3 = *(0 + r31); // lwz @ 0x8063D5DC
    FUN_8070D30C(r4, r5, r6); // bl 0x8070D30C
    r0 = *(0x24 + r1); // lwz @ 0x8063D5E4
    r31 = *(0x1c + r1); // lwz @ 0x8063D5E8
    r30 = *(0x18 + r1); // lwz @ 0x8063D5EC
    r29 = *(0x14 + r1); // lwz @ 0x8063D5F0
    return;
}