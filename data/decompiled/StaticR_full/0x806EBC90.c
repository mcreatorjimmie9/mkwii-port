/* Function at 0x806EBC90, size=148 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r23 */
/* Calls: 1 function(s) */

int FUN_806EBC90(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -224(r1) */
    /* saved r23 */
    /* li r6, 0 */ // 0x806EBC98
    *(0xe4 + r1) = r0; // stw @ 0x806EBC9C
    /* stmw r23, 0xbc(r1) */ // 0x806EBCAC
    r24 = r3;
    r25 = r4;
    /* li r4, 4 */ // 0x806EBCCC
    *(0x20 + r1) = r8; // stw @ 0x806EBCD0
    *(0x2c + r1) = r9; // stw @ 0x806EBCD8
    *(0x38 + r1) = r10; // stw @ 0x806EBCE0
    *(0x44 + r1) = r11; // stw @ 0x806EBCE8
    *(0x50 + r1) = r5; // stw @ 0x806EBCF0
    *(0x1c + r1) = r6; // stw @ 0x806EBCF8
    *(8 + r1) = r7; // stw @ 0x806EBCFC
    *(0x5c + r1) = r8; // stw @ 0x806EBD00
    *(0x68 + r1) = r9; // stw @ 0x806EBD04
    *(0x74 + r1) = r10; // stw @ 0x806EBD08
    *(0x80 + r1) = r11; // stw @ 0x806EBD0C
    *(0x8c + r1) = r5; // stw @ 0x806EBD10
    *(0x98 + r1) = r0; // stw @ 0x806EBD14
    *(0xa4 + r1) = r6; // stw @ 0x806EBD18
    *(0xc + r1) = r7; // stw @ 0x806EBD1C
    FUN_805E3430(); // bl 0x805E3430
}