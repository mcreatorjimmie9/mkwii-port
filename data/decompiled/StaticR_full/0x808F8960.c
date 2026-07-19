/* Function at 0x808F8960, size=84 bytes */
/* Stack frame: 0 bytes */

int FUN_808F8960(int r3, int r4)
{
    r0 = *(0x64 + r4); // lwz @ 0x808F8960
    if (>) goto 0x0x808f8984;
    /* lis r3, 0 */ // 0x808F896C
    /* slwi r0, r0, 2 */ // 0x808F8970
    r3 = r3 + 0; // 0x808F8974
    /* lwzx r3, r3, r0 */ // 0x808F8978
    /* mtctr r3 */ // 0x808F897C
    /* bctr  */ // 0x808F8980
    /* li r0, 0 */ // 0x808F8984
    *(0 + r5) = r0; // stw @ 0x808F8988
    /* b 0x808f89b0 */ // 0x808F898C
    /* li r0, 1 */ // 0x808F8990
    *(0 + r5) = r0; // stw @ 0x808F8994
    /* b 0x808f89b0 */ // 0x808F8998
    /* li r0, 2 */ // 0x808F899C
    *(0 + r5) = r0; // stw @ 0x808F89A0
    /* b 0x808f89b0 */ // 0x808F89A4
    /* li r0, 3 */ // 0x808F89A8
    *(0 + r5) = r0; // stw @ 0x808F89AC
    r0 = *(0x9c + r4); // lwz @ 0x808F89B0
}