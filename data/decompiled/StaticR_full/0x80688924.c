/* Function at 0x80688924, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80688924(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80688930
    r31 = r3;
    FUN_808CB2B4(); // bl 0x808CB2B4
    /* lis r3, 0 */ // 0x8068893C
    /* li r0, 0 */ // 0x80688940
    r3 = r3 + 0; // 0x80688944
    *(0 + r31) = r3; // stw @ 0x80688948
    r3 = r31;
    *(0x340 + r31) = r0; // stw @ 0x80688950
    r31 = *(0xc + r1); // lwz @ 0x80688954
    r0 = *(0x14 + r1); // lwz @ 0x80688958
    return;
}