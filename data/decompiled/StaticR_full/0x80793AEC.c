/* Function at 0x80793AEC, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80793AEC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r5 = r4;
    /* li r4, 0 */ // 0x80793AF8
    *(0x14 + r1) = r0; // stw @ 0x80793AFC
    r6 = r3;
    *(0xc + r1) = r31; // stw @ 0x80793B04
    r0 = *(0x88 + r3); // lwz @ 0x80793B08
    /* mtctr r0 */ // 0x80793B0C
    if (<=) goto 0x0x80793b40;
    r0 = *(0x80 + r6); // lwz @ 0x80793B18
    if (!=) goto 0x0x80793b34;
    /* slwi r0, r4, 2 */ // 0x80793B24
    r4 = r3 + r0; // 0x80793B28
    r31 = r4 + 0x80; // 0x80793B2C
    /* b 0x80793b44 */ // 0x80793B30
    r6 = r6 + 4; // 0x80793B34
    r4 = r4 + 1; // 0x80793B38
    if (counter-- != 0) goto 0x0x80793b18;
    /* li r31, 0 */ // 0x80793B40
    if (==) goto 0x0x80793b60;
    r4 = r31;
    /* li r6, 0 */ // 0x80793B50
    FUN_805E3430(r4, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x80793b64 */ // 0x80793B5C
    /* li r3, 0 */ // 0x80793B60
    r0 = *(0x14 + r1); // lwz @ 0x80793B64
    r31 = *(0xc + r1); // lwz @ 0x80793B68
}