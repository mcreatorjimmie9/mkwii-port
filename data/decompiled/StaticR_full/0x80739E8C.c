/* Function at 0x80739E8C, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80739E8C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80739E9C
    r30 = r3;
    r31 = *(0x238 + r3); // lwz @ 0x80739EA4
    if (!=) goto 0x0x80739eb8;
    /* li r0, 0 */ // 0x80739EB0
    /* b 0x80739f2c */ // 0x80739EB4
    r3 = r31 + 0x74; // 0x80739EB8
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80739ed0;
    /* li r3, 0 */ // 0x80739EC8
    /* b 0x80739ed4 */ // 0x80739ECC
    r3 = *(0xc + r3); // lwz @ 0x80739ED0
    /* li r0, 0 */ // 0x80739ED8
    if (==) goto 0x0x80739ee8;
    if (!=) goto 0x0x80739eec;
}