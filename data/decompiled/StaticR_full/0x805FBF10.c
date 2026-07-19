/* Function at 0x805FBF10, size=56 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 2 function(s) */

int FUN_805FBF10(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x805FBF1C
    r25 = r3;
    r26 = r4;
    FUN_805FB5E4(); // bl 0x805FB5E4
    /* lis r3, 0 */ // 0x805FBF2C
    r3 = r3 + 0; // 0x805FBF30
    *(0xc + r25) = r3; // stw @ 0x805FBF34
    r0 = *(0xe + r26); // lhz @ 0x805FBF38
    *(0x23c + r25) = r0; // sth @ 0x805FBF3C
    /* slwi r3, r0, 2 */ // 0x805FBF40
    FUN_805E3430(r3); // bl 0x805E3430
}