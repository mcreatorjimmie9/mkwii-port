/* Function at 0x80793FEC, size=40 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80793FEC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x80793FF4
    *(0xc + r1) = r31; // stw @ 0x80793FFC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80794004
    r30 = r3;
    r3 = *(0 + r5); // lwz @ 0x8079400C
    FUN_805E3430(); // bl 0x805E3430
}