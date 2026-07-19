/* Function at 0x808E2C28, size=88 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_808E2C28(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x808E2C30
    FUN_8089E030(); // bl 0x8089E030
    if (==) goto 0x0x808e2c54;
    if (==) goto 0x0x808e2c5c;
    if (==) goto 0x0x808e2c64;
    /* b 0x808e2c6c */ // 0x808E2C50
    /* li r3, 0x12 */ // 0x808E2C54
    /* b 0x808e2c70 */ // 0x808E2C58
    /* li r3, 0x13 */ // 0x808E2C5C
    /* b 0x808e2c70 */ // 0x808E2C60
    /* li r3, 0x14 */ // 0x808E2C64
    /* b 0x808e2c70 */ // 0x808E2C68
    /* li r3, -1 */ // 0x808E2C6C
    r0 = *(0x14 + r1); // lwz @ 0x808E2C70
    return;
}