/* Function at 0x808E2BD0, size=88 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_808E2BD0(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x808E2BD8
    FUN_8089E030(); // bl 0x8089E030
    if (==) goto 0x0x808e2bfc;
    if (==) goto 0x0x808e2c04;
    if (==) goto 0x0x808e2c0c;
    /* b 0x808e2c14 */ // 0x808E2BF8
    /* li r3, 0 */ // 0x808E2BFC
    /* b 0x808e2c18 */ // 0x808E2C00
    /* li r3, 1 */ // 0x808E2C04
    /* b 0x808e2c18 */ // 0x808E2C08
    /* li r3, 2 */ // 0x808E2C0C
    /* b 0x808e2c18 */ // 0x808E2C10
    /* li r3, -1 */ // 0x808E2C14
    r0 = *(0x14 + r1); // lwz @ 0x808E2C18
    return;
}