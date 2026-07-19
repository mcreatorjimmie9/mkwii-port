/* Function at 0x806E29A0, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806E29A0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806E29AC
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x806E29B8
    /* lis r4, 0 */ // 0x806E29BC
    r3 = r3 + 0; // 0x806E29C0
    /* lis r5, 0 */ // 0x806E29C4
    *(0 + r31) = r3; // stw @ 0x806E29C8
    r3 = r31 + 0x44; // 0x806E29CC
    r4 = r4 + 0; // 0x806E29D0
    r5 = r5 + 0; // 0x806E29D4
    /* li r6, 0x178 */ // 0x806E29D8
    /* li r7, 4 */ // 0x806E29DC
    FUN_805E3430(r3, r4, r5, r6, r7); // bl 0x805E3430
}