/* Function at 0x8069E9F8, size=204 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8069E9F8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8069EA08
    *(0x18 + r1) = r30; // stw @ 0x8069EA0C
    r30 = r3;
    r3 = *(0 + r31); // lwz @ 0x8069EA14
    r3 = r3 + 0x34; // 0x8069EA18
    FUN_8067FD2C(r3); // bl 0x8067FD2C
    r3 = *(0 + r31); // lwz @ 0x8069EA20
    /* li r4, 0 */ // 0x8069EA24
    r3 = r3 + 0x34; // 0x8069EA28
    FUN_8067F750(r3, r4, r3); // bl 0x8067F750
    /* li r0, 0 */ // 0x8069EA30
    *(0x1c8 + r30) = r0; // stw @ 0x8069EA34
    /* lis r3, 0 */ // 0x8069EA38
    *(0x1cc + r30) = r0; // stb @ 0x8069EA3C
    r3 = *(0 + r3); // lwz @ 0x8069EA40
    r0 = *(0x58 + r3); // lwz @ 0x8069EA44
    if (!=) goto 0x0x8069ea80;
    /* lis r5, 0 */ // 0x8069EA50
    r3 = *(0 + r31); // lwz @ 0x8069EA54
    r0 = *(0 + r5); // lwz @ 0x8069EA58
    *(0xc + r1) = r0; // stw @ 0x8069EA60
    /* li r5, 1 */ // 0x8069EA64
    /* li r6, 0 */ // 0x8069EA68
    /* li r7, 0 */ // 0x8069EA6C
    r3 = *(0 + r3); // lwz @ 0x8069EA70
    r3 = *(0x400 + r3); // lwz @ 0x8069EA74
    FUN_80670600(r5, r6, r7); // bl 0x80670600
    /* b 0x8069eaac */ // 0x8069EA7C
    /* lis r5, 0 */ // 0x8069EA80
    r3 = *(0 + r31); // lwz @ 0x8069EA84
    r0 = *(0 + r5); // lwz @ 0x8069EA88
    *(8 + r1) = r0; // stw @ 0x8069EA90
    /* li r5, 1 */ // 0x8069EA94
    /* li r6, 0 */ // 0x8069EA98
    /* li r7, 0 */ // 0x8069EA9C
    r3 = *(0 + r3); // lwz @ 0x8069EAA0
    r3 = *(0x400 + r3); // lwz @ 0x8069EAA4
    FUN_80670600(r5, r6, r7); // bl 0x80670600
    r0 = *(0x24 + r1); // lwz @ 0x8069EAAC
    r31 = *(0x1c + r1); // lwz @ 0x8069EAB0
    r30 = *(0x18 + r1); // lwz @ 0x8069EAB4
    return;
}