/* Function at 0x808AAC20, size=240 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_808AAC20(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    *(0x24 + r1) = r0; // stw @ 0x808AAC2C
    /* stmw r27, 0xc(r1) */ // 0x808AAC30
    r27 = r3;
    r28 = r4;
    if (==) goto 0x0x808aacf8;
    /* lis r4, 0 */ // 0x808AAC40
    /* li r29, 0 */ // 0x808AAC44
    r4 = r4 + 0; // 0x808AAC48
    *(0 + r3) = r4; // stw @ 0x808AAC4C
    /* li r31, 0 */ // 0x808AAC50
    /* b 0x808aac90 */ // 0x808AAC54
    r3 = *(0x1c + r27); // lwz @ 0x808AAC58
    r30 = r29 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r30 */ // 0x808AAC60
    if (==) goto 0x0x808aac8c;
    if (==) goto 0x0x808aac84;
    r12 = *(0 + r3); // lwz @ 0x808AAC70
    /* li r4, 1 */ // 0x808AAC74
    r12 = *(8 + r12); // lwz @ 0x808AAC78
    /* mtctr r12 */ // 0x808AAC7C
    /* bctrl  */ // 0x808AAC80
    r3 = *(0x1c + r27); // lwz @ 0x808AAC84
    /* stwx r31, r3, r30 */ // 0x808AAC88
    r29 = r29 + 1; // 0x808AAC8C
    r0 = *(0x18 + r27); // lhz @ 0x808AAC90
    /* clrlwi r3, r29, 0x10 */ // 0x808AAC94
    if (<) goto 0x0x808aac58;
    r3 = *(0x58 + r27); // lwz @ 0x808AACA0
    if (==) goto 0x0x808aacbc;
    if (==) goto 0x0x808aacb4;
    FUN_805E3430(); // bl 0x805E3430
    /* li r0, 0 */ // 0x808AACB4
    *(0x58 + r27) = r0; // stw @ 0x808AACB8
    r3 = *(0x5c + r27); // lwz @ 0x808AACBC
    if (==) goto 0x0x808aace8;
    if (==) goto 0x0x808aace0;
    r12 = *(0 + r3); // lwz @ 0x808AACCC
    /* li r4, 1 */ // 0x808AACD0
    r12 = *(8 + r12); // lwz @ 0x808AACD4
    /* mtctr r12 */ // 0x808AACD8
    /* bctrl  */ // 0x808AACDC
    /* li r0, 0 */ // 0x808AACE0
    *(0x5c + r27) = r0; // stw @ 0x808AACE4
    if (<=) goto 0x0x808aacf8;
    r3 = r27;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r27;
    r0 = *(0x24 + r1); // lwz @ 0x808AAD00
    return;
}