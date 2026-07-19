/* Function at 0x805B91BC, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805B91BC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 4 */ // 0x805B91C8
    *(0xc + r1) = r31; // stw @ 0x805B91CC
    /* li r31, 0 */ // 0x805B91D0
    *(8 + r1) = r30; // stw @ 0x805B91D4
    r30 = r3;
    /* mtctr r0 */ // 0x805B91DC
    r0 = *(0x2d8 + r3); // lwz @ 0x805B91E0
    if (!=) goto 0x0x805b9244;
    FUN_805E3430(); // bl 0x805E3430
    if (==) goto 0x0x805b920c;
    if (==) goto 0x0x805b920c;
    if (==) goto 0x0x805b9224;
    /* b 0x805b922c */ // 0x805B9208
    /* slwi r0, r31, 2 */ // 0x805B920C
    /* li r5, 2 */ // 0x805B9210
    r4 = r30 + r0; // 0x805B9214
}