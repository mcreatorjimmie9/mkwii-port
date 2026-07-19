/* Function at 0x806E66A4, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806E66A4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806E66B0
    r0 = *(0x291c + r3); // lwz @ 0x806E66B4
    /* mulli r0, r0, 0x58 */ // 0x806E66B8
    r3 = r3 + r0; // 0x806E66BC
    r0 = *(0x38 + r3); // lwz @ 0x806E66C0
    r31 = *(0x3c + r3); // lwz @ 0x806E66C4
    /* or. r0, r31, r0 */ // 0x806E66C8
    if (!=) goto 0x0x806e66d8;
    /* li r3, 0 */ // 0x806E66D0
    /* b 0x806e66f0 */ // 0x806E66D4
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r3, -0x8000 */ // 0x806E66DC
    /* subf r4, r31, r4 */ // 0x806E66E0
    r0 = *(0xf8 + r3); // lwz @ 0x806E66E4
    /* srwi r0, r0, 2 */ // 0x806E66E8
    r3 = r4 u/ r0; // 0x806E66EC
}