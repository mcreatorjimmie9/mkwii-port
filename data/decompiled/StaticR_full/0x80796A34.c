/* Function at 0x80796A34, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80796A34(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x80796A4C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80796A54
    r29 = r3;
    if (==) goto 0x0x80796a68;
    if (!=) goto 0x0x80796a70;
    /* li r3, 0 */ // 0x80796A68
    /* b 0x80796aa4 */ // 0x80796A6C
    r3 = r3 + 0x94; // 0x80796A70
    FUN_8078FFE0(r3, r3); // bl 0x8078FFE0
    if (==) goto 0x0x80796a88;
    /* li r3, 0 */ // 0x80796A80
    /* b 0x80796aa4 */ // 0x80796A84
    r3 = r29;
    r4 = r31;
    r5 = r30;
    /* li r6, 0 */ // 0x80796A94
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    /* cntlzw r0, r3 */ // 0x80796A9C
    /* srwi r3, r0, 5 */ // 0x80796AA0
    r0 = *(0x24 + r1); // lwz @ 0x80796AA4
    r31 = *(0x1c + r1); // lwz @ 0x80796AA8
    r30 = *(0x18 + r1); // lwz @ 0x80796AAC
    r29 = *(0x14 + r1); // lwz @ 0x80796AB0
}