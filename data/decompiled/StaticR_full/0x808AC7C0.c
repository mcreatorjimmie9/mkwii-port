/* Function at 0x808AC7C0, size=140 bytes */
/* Stack frame: 176 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808AC7C0(int r3, int r4, int r5)
{
    /* Stack frame: -176(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x808AC7C8
    r5 = r5 + 0; // 0x808AC7D0
    *(0xac + r1) = r31; // stw @ 0x808AC7D4
    /* lis r31, 0 */ // 0x808AC7D8
    r31 = r31 + 0; // 0x808AC7DC
    *(0xa8 + r1) = r30; // stw @ 0x808AC7E0
    r30 = r3;
    *(0xa4 + r1) = r29; // stw @ 0x808AC7E8
    *(0xa0 + r1) = r28; // stw @ 0x808AC7EC
    r28 = r4;
    FUN_8089F578(); // bl 0x8089F578
    /* li r4, 0x4b0 */ // 0x808AC7F8
    /* lis r0, 0x4330 */ // 0x808AC7FC
    /* xoris r3, r4, 0x8000 */ // 0x808AC800
    *(0x9c + r1) = r3; // stw @ 0x808AC804
    /* lfs f3, 4(r31) */ // 0x808AC808
    /* lis r5, 0 */ // 0x808AC80C
    *(0x98 + r1) = r0; // stw @ 0x808AC810
    r5 = r5 + 0; // 0x808AC814
    /* lfd f2, 0x20(r31) */ // 0x808AC818
    /* li r0, 0 */ // 0x808AC81C
    /* lfd f1, 0x98(r1) */ // 0x808AC820
    /* li r3, 0xb4 */ // 0x808AC824
    /* lfs f0, 8(r31) */ // 0x808AC828
    /* fsubs f1, f1, f2 */ // 0x808AC82C
    *(0 + r30) = r5; // stw @ 0x808AC830
    *(0xc4 + r30) = r0; // sth @ 0x808AC834
    /* fdivs f0, f0, f1 */ // 0x808AC838
    *(0xc6 + r30) = r4; // sth @ 0x808AC83C
    /* stfs f3, 0xc8(r30) */ // 0x808AC840
    /* stfs f0, 0xcc(r30) */ // 0x808AC844
    FUN_805E3430(); // bl 0x805E3430
}