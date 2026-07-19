/* Function at 0x806E6704, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806E6704(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806E670C
    /* lis r6, 0 */ // 0x806E6710
    *(0x14 + r1) = r0; // stw @ 0x806E6714
    r4 = r4 + 0; // 0x806E6718
    r6 = r6 + 0; // 0x806E671C
    /* li r8, 0 */ // 0x806E6720
    *(0xc + r1) = r31; // stw @ 0x806E6724
    r31 = r3;
    /* li r3, 0 */ // 0x806E672C
    /* li r9, 0 */ // 0x806E6730
    r5 = r31;
    r7 = r31;
    FUN_805E3430(r3, r9, r5, r7); // bl 0x805E3430
}