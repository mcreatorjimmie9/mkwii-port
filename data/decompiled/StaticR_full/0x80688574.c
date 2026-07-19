/* Function at 0x80688574, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80688574(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80688580
    r31 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r3, 0 */ // 0x8068858C
    /* lis r4, 0 */ // 0x80688590
    r3 = r3 + 0; // 0x80688594
    /* lis r5, 0 */ // 0x80688598
    *(0 + r31) = r3; // stw @ 0x8068859C
    r3 = r31 + 0x1f0; // 0x806885A0
    r4 = r4 + 0; // 0x806885A4
    r5 = r5 + 0; // 0x806885A8
    /* li r6, 0x174 */ // 0x806885AC
    /* li r7, 6 */ // 0x806885B0
    FUN_805E3430(r3, r4, r5, r6, r7); // bl 0x805E3430
}