/* Function at 0x808E2A98, size=252 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808E2A98(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x808E2AA4
    *(0xc + r1) = r31; // stw @ 0x808E2AA8
    r31 = r3;
    if (!=) goto 0x0x808e2ac4;
    /* lis r3, 0 */ // 0x808E2AB4
    r3 = r3 + 0; // 0x808E2AB8
    r3 = r3 + 0x19; // 0x808E2ABC
    /* b 0x808e2b80 */ // 0x808E2AC0
    if (>=) goto 0x0x808e2adc;
    /* lis r3, 0 */ // 0x808E2ACC
    r3 = r3 + 0; // 0x808E2AD0
    r3 = r3 + 0x1d; // 0x808E2AD4
    /* b 0x808e2b80 */ // 0x808E2AD8
    FUN_8089DE64(r3, r3, r3); // bl 0x8089DE64
    if (==) goto 0x0x808e2afc;
    if (==) goto 0x0x808e2b0c;
    if (==) goto 0x0x808e2b44;
    /* b 0x808e2b7c */ // 0x808E2AF8
    /* lis r3, 0 */ // 0x808E2AFC
    r3 = r3 + 0; // 0x808E2B00
    r3 = r3 + 0x22; // 0x808E2B04
    /* b 0x808e2b80 */ // 0x808E2B08
    if (==) goto 0x0x808e2b24;
    if (==) goto 0x0x808e2b24;
    if (!=) goto 0x0x808e2b34;
    /* lis r3, 0 */ // 0x808E2B24
    r3 = r3 + 0; // 0x808E2B28
    r3 = r3 + 0x2b; // 0x808E2B2C
    /* b 0x808e2b80 */ // 0x808E2B30
    /* lis r3, 0 */ // 0x808E2B34
    r3 = r3 + 0; // 0x808E2B38
    r3 = r3 + 0x33; // 0x808E2B3C
    /* b 0x808e2b80 */ // 0x808E2B40
    if (==) goto 0x0x808e2b5c;
    if (==) goto 0x0x808e2b5c;
    if (!=) goto 0x0x808e2b6c;
    /* lis r3, 0 */ // 0x808E2B5C
    r3 = r3 + 0; // 0x808E2B60
    r3 = r3 + 0x3c; // 0x808E2B64
    /* b 0x808e2b80 */ // 0x808E2B68
    /* lis r3, 0 */ // 0x808E2B6C
    r3 = r3 + 0; // 0x808E2B70
    r3 = r3 + 0x44; // 0x808E2B74
    /* b 0x808e2b80 */ // 0x808E2B78
    /* li r3, 0 */ // 0x808E2B7C
    r0 = *(0x14 + r1); // lwz @ 0x808E2B80
    r31 = *(0xc + r1); // lwz @ 0x808E2B84
    return;
}