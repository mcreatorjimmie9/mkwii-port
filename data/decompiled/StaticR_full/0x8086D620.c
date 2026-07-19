/* Function at 0x8086D620, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8086D620(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x8086D628
    *(0xc + r1) = r31; // stw @ 0x8086D630
    *(8 + r1) = r30; // stw @ 0x8086D634
    r30 = r3;
    r31 = *(0x18 + r3); // lbz @ 0x8086D63C
    r3 = *(0 + r4); // lwz @ 0x8086D640
    r4 = r31;
    FUN_8086D8A8(r4); // bl 0x8086D8A8
    /* lis r3, 0 */ // 0x8086D64C
    r3 = *(0 + r3); // lwz @ 0x8086D650
    FUN_80841020(r4, r3); // bl 0x80841020
    r3 = r30 + 0x88; // 0x8086D658
    /* li r4, 1 */ // 0x8086D65C
    FUN_80841FBC(r3, r3, r4); // bl 0x80841FBC
    /* lis r3, 0 */ // 0x8086D664
    r0 = *(0 + r3); // lbz @ 0x8086D668
    if (==) goto 0x0x8086d680;
    r4 = r31;
    /* li r3, 0xb */ // 0x8086D678
    FUN_808272B4(r4, r3); // bl 0x808272B4
    r0 = *(0x14 + r1); // lwz @ 0x8086D680
    r31 = *(0xc + r1); // lwz @ 0x8086D684
    r30 = *(8 + r1); // lwz @ 0x8086D688
    return;
}