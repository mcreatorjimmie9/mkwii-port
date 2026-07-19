/* Function at 0x8070A818, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8070A818(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8070A824
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x8070A830
    r3 = r31 + 0x44; // 0x8070A834
    r4 = r4 + 0; // 0x8070A838
    *(0 + r31) = r4; // stw @ 0x8070A83C
    FUN_80668134(r4, r3, r4); // bl 0x80668134
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x8070A848
    r0 = *(0x14 + r1); // lwz @ 0x8070A84C
    return;
}