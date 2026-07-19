/* Function at 0x808295E4, size=164 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_808295E4(int r3, int r4, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lfs f2, 0(r6) */ // 0x808295EC
    /* li r0, 0xc */ // 0x808295F4
    /* lfs f1, 4(r6) */ // 0x808295F8
    *(0xc + r1) = r31; // stw @ 0x808295FC
    r31 = r7;
    /* lfs f0, 8(r6) */ // 0x80829604
    *(8 + r1) = r30; // stw @ 0x80829608
    r30 = r3;
    /* stfs f2, 0x44(r3) */ // 0x80829610
    /* stfs f1, 0x48(r3) */ // 0x80829614
    /* stfs f0, 0x4c(r3) */ // 0x80829618
    *(0x6c + r3) = r5; // stb @ 0x8082961C
    *(0x6d + r3) = r0; // stb @ 0x80829620
    FUN_80829688(); // bl 0x80829688
    r3 = r30;
    FUN_80829420(r3); // bl 0x80829420
    r0 = *(0x78 + r30); // lwz @ 0x80829630
    /* rlwinm. r0, r0, 0, 7, 7 */ // 0x80829634
    if (==) goto 0x0x8082964c;
    r3 = r30;
    /* li r4, 0 */ // 0x80829640
    FUN_8082BD68(r3, r4); // bl 0x8082BD68
    /* b 0x80829660 */ // 0x80829648
    /* lis r4, 0 */ // 0x8082964C
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x80829654
    /* li r4, 0 */ // 0x80829658
    FUN_8082B84C(r4, r3, r4); // bl 0x8082B84C
    r3 = r30;
    r4 = r31;
    FUN_80825D54(r4, r3, r4); // bl 0x80825D54
    *(0xc + r30) = r3; // sth @ 0x8082966C
    r31 = *(0xc + r1); // lwz @ 0x80829670
    r30 = *(8 + r1); // lwz @ 0x80829674
    r0 = *(0x14 + r1); // lwz @ 0x80829678
    return;
}