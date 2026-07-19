/* Function at 0x808E2C80, size=88 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_808E2C80(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x808E2C88
    FUN_8089E030(); // bl 0x8089E030
    if (==) goto 0x0x808e2cac;
    if (==) goto 0x0x808e2cb4;
    if (==) goto 0x0x808e2cbc;
    /* b 0x808e2cc4 */ // 0x808E2CA8
    /* li r3, 0x12 */ // 0x808E2CAC
    /* b 0x808e2cc8 */ // 0x808E2CB0
    /* li r3, 0x16 */ // 0x808E2CB4
    /* b 0x808e2cc8 */ // 0x808E2CB8
    /* li r3, 0x1a */ // 0x808E2CBC
    /* b 0x808e2cc8 */ // 0x808E2CC0
    /* li r3, -1 */ // 0x808E2CC4
    r0 = *(0x14 + r1); // lwz @ 0x808E2CC8
    return;
}