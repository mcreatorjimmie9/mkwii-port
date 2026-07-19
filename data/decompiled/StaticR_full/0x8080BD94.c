/* Function at 0x8080BD94, size=144 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8080BD94(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x8080BDA0
    r31 = r3;
    FUN_807F3A60(); // bl 0x807F3A60
    /* lis r4, 0 */ // 0x8080BDAC
    r0 = *(0x2c + r31); // lhz @ 0x8080BDB0
    /* lfs f0, 0(r4) */ // 0x8080BDB4
    /* lis r7, 0 */ // 0x8080BDB8
    /* stfs f0, 0xdc(r31) */ // 0x8080BDBC
    r4 = r4 + 0; // 0x8080BDC0
    /* lis r3, 0 */ // 0x8080BDC4
    r0 = r0 | 8; // 0x8080BDC8
    /* lfs f1, 4(r4) */ // 0x8080BDCC
    r6 = r7 + 0; // 0x8080BDD0
    /* stfs f1, 0xe0(r31) */ // 0x8080BDD4
    r5 = r31 + 0x30; // 0x8080BDD8
    /* lfs f0, 0(r3) */ // 0x8080BDDC
    /* lfs f1, 8(r4) */ // 0x8080BDE4
    /* stfs f1, 0xe4(r31) */ // 0x8080BDEC
    /* lfs f2, 0x34(r31) */ // 0x8080BDF0
    *(0x2c + r31) = r0; // sth @ 0x8080BDF4
    /* stfs f0, 0x3c(r31) */ // 0x8080BDF8
    /* stfs f0, 0x40(r31) */ // 0x8080BDFC
    /* stfs f0, 0x44(r31) */ // 0x8080BE00
    /* lfs f1, 8(r6) */ // 0x8080BE04
    /* lfs f0, 0(r7) */ // 0x8080BE08
    /* stfs f0, 0x14(r1) */ // 0x8080BE0C
    /* stfs f2, 0x18(r1) */ // 0x8080BE10
    /* stfs f1, 0x1c(r1) */ // 0x8080BE14
    FUN_805A4498(); // bl 0x805A4498
    FUN_805E3430(r3); // bl 0x805E3430
}