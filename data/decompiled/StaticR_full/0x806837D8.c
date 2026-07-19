/* Function at 0x806837D8, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_806837D8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806837E0
    *(0x14 + r1) = r0; // stw @ 0x806837E4
    *(0xc + r1) = r31; // stw @ 0x806837E8
    /* lis r31, 0 */ // 0x806837EC
    r3 = *(0 + r31); // lwz @ 0x806837F0
    r3 = r3 + 0x34; // 0x806837F4
    FUN_8067F3DC(r3); // bl 0x8067F3DC
    if (!=) goto 0x0x8068381c;
    r3 = *(0 + r31); // lwz @ 0x80683804
    r3 = r3 + 0x34; // 0x80683808
    FUN_8067F50C(r3); // bl 0x8067F50C
    r3 = *(0 + r31); // lwz @ 0x80683810
    r3 = r3 + 0x34; // 0x80683814
    FUN_8067F608(r3, r3); // bl 0x8067F608
    /* lis r3, 0 */ // 0x8068381C
    r3 = *(0 + r3); // lwz @ 0x80683820
    r3 = *(0 + r3); // lwz @ 0x80683824
    FUN_80686240(r3, r3); // bl 0x80686240
    /* lis r3, 0 */ // 0x8068382C
    r3 = *(0 + r3); // lwz @ 0x80683830
    FUN_8070037C(r3); // bl 0x8070037C
    r0 = *(0x14 + r1); // lwz @ 0x80683838
    r31 = *(0xc + r1); // lwz @ 0x8068383C
    return;
}