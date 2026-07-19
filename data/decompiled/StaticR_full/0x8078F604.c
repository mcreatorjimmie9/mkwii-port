/* Function at 0x8078F604, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8078F604(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r6 = r4;
    *(0x14 + r1) = r0; // stw @ 0x8078F614
    *(0xc + r1) = r31; // stw @ 0x8078F618
    if (>=) goto 0x0x8078f630;
    /* slwi r0, r5, 2 */ // 0x8078F620
    r4 = r3 + r0; // 0x8078F624
    r31 = r4 + 0x80; // 0x8078F628
    /* b 0x8078f634 */ // 0x8078F62C
    /* li r31, 0 */ // 0x8078F630
    if (==) goto 0x0x8078f654;
    r5 = r6;
    r4 = r31;
    /* li r6, 0 */ // 0x8078F644
    FUN_805E3430(r5, r4, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x8078f658 */ // 0x8078F650
    /* li r3, 0 */ // 0x8078F654
    r0 = *(0x14 + r1); // lwz @ 0x8078F658
    r31 = *(0xc + r1); // lwz @ 0x8078F65C
}