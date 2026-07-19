/* Function at 0x807B0BFC, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_807B0BFC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    *(0x24 + r1) = r0; // stw @ 0x807B0C08
    /* stmw r27, 0xc(r1) */ // 0x807B0C0C
    r27 = r3;
    r28 = r4;
    if (==) goto 0x0x807b0c74;
    /* lis r4, 0 */ // 0x807B0C1C
    r30 = r27;
    r4 = r4 + 0; // 0x807B0C24
    *(0 + r3) = r4; // stw @ 0x807B0C28
    /* li r29, 0 */ // 0x807B0C2C
    /* li r31, 0 */ // 0x807B0C30
    r3 = *(4 + r30); // lwz @ 0x807B0C34
    if (==) goto 0x0x807b0c54;
    r12 = *(0 + r3); // lwz @ 0x807B0C40
    /* li r4, 1 */ // 0x807B0C44
    r12 = *(8 + r12); // lwz @ 0x807B0C48
    /* mtctr r12 */ // 0x807B0C4C
    /* bctrl  */ // 0x807B0C50
    r29 = r29 + 1; // 0x807B0C54
    *(4 + r30) = r31; // stwu @ 0x807B0C58
    if (<) goto 0x0x807b0c34;
    if (<=) goto 0x0x807b0c74;
    r3 = r27;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r27;
    r0 = *(0x24 + r1); // lwz @ 0x807B0C7C
    return;
}