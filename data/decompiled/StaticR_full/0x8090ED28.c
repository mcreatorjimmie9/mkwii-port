/* Function at 0x8090ED28, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_8090ED28(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x8090ED40
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x8090ED48
    r28 = r3;
    if (==) goto 0x0x8090edd0;
    r0 = *(4 + r3); // lwz @ 0x8090ED54
    if (==) goto 0x0x8090ed9c;
    r3 = *(8 + r3); // lwz @ 0x8090ED60
    FUN_805E3430(); // bl 0x805E3430
    /* li r30, 0 */ // 0x8090ED68
    /* li r31, 0 */ // 0x8090ED6C
    /* b 0x8090ed88 */ // 0x8090ED70
    r3 = *(0x20 + r28); // lwz @ 0x8090ED74
    /* lwzx r3, r3, r31 */ // 0x8090ED78
    FUN_805E3430(); // bl 0x805E3430
    r31 = r31 + 4; // 0x8090ED80
    r30 = r30 + 1; // 0x8090ED84
    r0 = *(4 + r28); // lwz @ 0x8090ED88
    if (<) goto 0x0x8090ed74;
    r3 = *(0x20 + r28); // lwz @ 0x8090ED94
    FUN_805E3430(); // bl 0x805E3430
    r0 = *(0xc + r28); // lwz @ 0x8090ED9C
    /* li r3, 0 */ // 0x8090EDA0
    *(4 + r28) = r3; // stw @ 0x8090EDA4
    if (==) goto 0x0x8090edb8;
    r3 = *(0x10 + r28); // lwz @ 0x8090EDB0
    FUN_805E3430(r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x8090EDBC
}