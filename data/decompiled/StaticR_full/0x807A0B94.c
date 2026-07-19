/* Function at 0x807A0B94, size=248 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_807A0B94(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x807A0BA8
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x807A0BB0
    r29 = r3;
    r3 = r30;
    FUN_806953A0(r3); // bl 0x806953A0
    if (==) goto 0x0x807a0be4;
    if (==) goto 0x0x807a0c08;
    if (==) goto 0x0x807a0c2c;
    if (==) goto 0x0x807a0c50;
    /* b 0x807a0c70 */ // 0x807A0BE0
    if (!=) goto 0x0x807a0c70;
    /* lis r5, 0 */ // 0x807A0BEC
    r4 = r3;
    r3 = *(0 + r5); // lwz @ 0x807A0BF4
    /* li r5, 0x3c */ // 0x807A0BF8
    FUN_80789C64(r5, r4, r5); // bl 0x80789C64
    *(4 + r29) = r30; // stw @ 0x807A0C00
    /* b 0x807a0c70 */ // 0x807A0C04
    if (!=) goto 0x0x807a0c70;
    /* lis r5, 0 */ // 0x807A0C10
    r4 = r3;
    r3 = *(0 + r5); // lwz @ 0x807A0C18
    /* li r5, 0x3c */ // 0x807A0C1C
    FUN_80789C64(r5, r4, r5); // bl 0x80789C64
    *(4 + r29) = r30; // stw @ 0x807A0C24
    /* b 0x807a0c70 */ // 0x807A0C28
    if (!=) goto 0x0x807a0c70;
    /* lis r5, 0 */ // 0x807A0C34
    r4 = r3;
    r3 = *(0 + r5); // lwz @ 0x807A0C3C
    /* li r5, 0x28 */ // 0x807A0C40
    FUN_80789C64(r5, r4, r5); // bl 0x80789C64
    *(4 + r29) = r30; // stw @ 0x807A0C48
    /* b 0x807a0c70 */ // 0x807A0C4C
    if (!=) goto 0x0x807a0c70;
    /* lis r5, 0 */ // 0x807A0C58
    r4 = r3;
    r3 = *(0 + r5); // lwz @ 0x807A0C60
    /* li r5, 0x3c */ // 0x807A0C64
    FUN_80789C64(r5, r4, r5); // bl 0x80789C64
    *(4 + r29) = r30; // stw @ 0x807A0C6C
    r0 = *(0x24 + r1); // lwz @ 0x807A0C70
    r31 = *(0x1c + r1); // lwz @ 0x807A0C74
    r30 = *(0x18 + r1); // lwz @ 0x807A0C78
    r29 = *(0x14 + r1); // lwz @ 0x807A0C7C
    return;
}