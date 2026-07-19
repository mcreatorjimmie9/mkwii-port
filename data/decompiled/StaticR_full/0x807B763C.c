/* Function at 0x807B763C, size=164 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 8 function(s) */

int FUN_807B763C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807B7648
    r31 = r3;
    FUN_8086E984(); // bl 0x8086E984
    if (==) goto 0x0x807b76cc;
    FUN_8086E9B4(); // bl 0x8086E9B4
    /* lis r4, 0 */ // 0x807B7660
    r0 = r3;
    r3 = *(0 + r4); // lwz @ 0x807B7668
    /* clrlwi r4, r0, 0x18 */ // 0x807B766C
    FUN_8061D97C(r4); // bl 0x8061D97C
    FUN_8061E93C(r4); // bl 0x8061E93C
    r5 = *(4 + r31); // lwz @ 0x807B7678
    r4 = r3;
    r3 = *(0 + r5); // lwz @ 0x807B7680
    FUN_807B5FF0(r4); // bl 0x807B5FF0
    if (!=) goto 0x0x807b76cc;
    FUN_8086E9A0(r4); // bl 0x8086E9A0
    if (!=) goto 0x0x807b76cc;
    /* lis r3, 0 */ // 0x807B769C
    /* li r4, 0x64 */ // 0x807B76A0
    r3 = *(0 + r3); // lwz @ 0x807B76A4
    FUN_807C03BC(r3, r4); // bl 0x807C03BC
    r0 = *(8 + r31); // lwz @ 0x807B76AC
    if (>=) goto 0x0x807b76cc;
    r3 = *(4 + r31); // lwz @ 0x807B76B8
    r3 = *(0 + r3); // lwz @ 0x807B76BC
    r3 = *(0x10 + r3); // lwz @ 0x807B76C0
    r3 = *(0x154 + r3); // lwz @ 0x807B76C4
    FUN_807BF1E0(); // bl 0x807BF1E0
    r0 = *(0x14 + r1); // lwz @ 0x807B76CC
    r31 = *(0xc + r1); // lwz @ 0x807B76D0
    return;
}