/* Function at 0x8068850C, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8068850C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80688518
    r31 = r3;
    FUN_808CE454(); // bl 0x808CE454
    /* lis r3, 0 */ // 0x80688524
    /* lis r4, 0 */ // 0x80688528
    r3 = r3 + 0; // 0x8068852C
    /* lis r5, 0 */ // 0x80688530
    *(0 + r31) = r3; // stw @ 0x80688534
    r3 = r31 + 0x1a0; // 0x80688538
    r4 = r4 + 0; // 0x8068853C
    r5 = r5 + 0; // 0x80688540
    /* li r6, 0xb90 */ // 0x80688544
    /* li r7, 2 */ // 0x80688548
    FUN_805E3430(r3, r4, r5, r6, r7); // bl 0x805E3430
}