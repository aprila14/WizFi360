/**
 * Copyright (c) 2022 WIZnet Co.,Ltd
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "azure_samples.h"

const char pico_az_connectionString[] = "[device connection string]";

const char pico_az_x509connectionString[] = "[device connection string]";

const char pico_az_x509certificate[] =
"-----BEGIN CERTIFICATE-----""\n"
"-----END CERTIFICATE-----";

const char pico_az_x509privatekey[] =
"-----BEGIN PRIVATE KEY-----""\n"
"-----END PRIVATE KEY-----";

const char pico_az_id_scope[] = "[0ne009E88B6]";

const char pico_az_COMMON_NAME[] = "[Wizfi360]";

const char pico_az_CERTIFICATE[] = 
"-----BEGIN CERTIFICATE-----""\n"
"MIIDNzCCAh8CFDoE6X6K7jJJ14RnngXHV4bdqJGTMA0GCSqGSIb3DQEBCwUAMFgx""\n"
"CzAJBgNVBAYTAlVTMRMwEQYDVQQIDApTb21lLVN0YXRlMSEwHwYDVQQKDBhJbnRl""\n"
"cm5ldCBXaWRnaXRzIFB0eSBMdGQxETAPBgNVBAMMCFdpemZpMzYwMB4XDTIzMDQx""\n"
"MzA3NTMyMloXDTI0MDQxMjA3NTMyMlowWDELMAkGA1UEBhMCVVMxEzARBgNVBAgM""\n"
"ClNvbWUtU3RhdGUxITAfBgNVBAoMGEludGVybmV0IFdpZGdpdHMgUHR5IEx0ZDER""\n"
"MA8GA1UEAwwIV2l6ZmkzNjAwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIB""\n"
"AQDC9zkWVUpZERqSdxlcHpYYxfoZ9Qrlf4yGaJjLRFj9HnFP6h5WNMoonQSArPIO""\n"
"6pHEMEBWP373B52HdfHOgsWNtLCBW4zmSVMJcNxmeXCQ+0pvA8/OvMTmCjqA592r""\n"
"C+TOV2yTWftkU4uN3Ud+upS7bd6r7i7EMiBIi8eXdCsqK+Y3Q5wNjrfo5ZCnZz2x""\n"
"smMEgDdZKMtqJilEOSGZz9/mPt4oIA+xF61iuAChudV97n9JbyB8LVBpU6vff7XI""\n"
"HimEc5/LyCys/sLUNbZWlqe1dODqztx4aI9XJb1A0ZJKf9z7SUdNYDxjOiAqRV2O""\n"
"VRmY8KeyccPzLgGwWJxWf4G3AgMBAAEwDQYJKoZIhvcNAQELBQADggEBAKrj9HRJ""\n"
"oM/3Y/W/BhfOVkjlRExZixp60rBFjCLgSrnAvPcDaHCdRkMBiY+l4VolGzDdzEMg""\n"
"bznSU82tb6ywj8BT3yOHrcz1dowCngq8i1w51ALyDlzsLeXmtC3/7wpuMEXYeE68""\n"
"u2kRV65LazWT4sMPe2Ambu1rk5J+ykIFjmZYWOxrk4E6kuwCKDukHDiQ1LWvOahv""\n"
"/LL0Jr73dJGV2Ae9WVM64NC1pZzQvD3gwXpt5uAYwhJRppQManBQader90xKhEfY""\n"
"kfg69qKNBBPsQoouUCOtwMiUwGOsNRCX7zZ6keGQ4A9r8RP2NdiIaQpoOXwZhBi/""\n"
"dDCIcM5zGk1ovmo=""\n"
"-----END CERTIFICATE-----";

const char pico_az_PRIVATE_KEY[] = 
"-----BEGIN PRIVATE KEY-----""\n"
"MIIEvwIBADANBgkqhkiG9w0BAQEFAASCBKkwggSlAgEAAoIBAQDC9zkWVUpZERqS""\n"
"dxlcHpYYxfoZ9Qrlf4yGaJjLRFj9HnFP6h5WNMoonQSArPIO6pHEMEBWP373B52H""\n"
"dfHOgsWNtLCBW4zmSVMJcNxmeXCQ+0pvA8/OvMTmCjqA592rC+TOV2yTWftkU4uN""\n"
"3Ud+upS7bd6r7i7EMiBIi8eXdCsqK+Y3Q5wNjrfo5ZCnZz2xsmMEgDdZKMtqJilE""\n"
"OSGZz9/mPt4oIA+xF61iuAChudV97n9JbyB8LVBpU6vff7XIHimEc5/LyCys/sLU""\n"
"NbZWlqe1dODqztx4aI9XJb1A0ZJKf9z7SUdNYDxjOiAqRV2OVRmY8KeyccPzLgGw""\n"
"WJxWf4G3AgMBAAECggEABrdAYqoOdRH3QdtTZs5w6iqLqnA771rc6tZYiQvyKsnt""\n"
"Kk0MvXh1DEAYYxxR/DyNR95HoRDv3S+IeB2SdkQf7Pkv6UzPhjE5aIZYOTlurLfT""\n"
"QQ63Dk6HU8s/Z6hVBOrUd10gktTTKYoNMRZRu6ZOsEQhGvgJ6V02qnkSJ3/rarjn""\n"
"89GzH5Zfe6EFl0s93LsIvDRhIlrG4jagXiQtjXxKwznNIgGAC6DucGttKpORuy8w""\n"
"CYtkmFGppYhoKYc9z9HmY5mSyFpnWqwG2RtNUPjxk2pGeqnWIcZkSvAXjCrwVBQe""\n"
"znLdynaLtbacJbgYy0fOg/NVARxntp/9T8viO39NuQKBgQDy12Cjkem6LABvolem""\n"
"RvcWnPXhqsS4oM9wJX2ADEHE1vnKn6olipU9iFU7KlvgK3MWH1O3bLcPcGjbE3G7""\n"
"2LHF0+0yxdSP2b4bv/KPEpj8NdTjQaJGFiUbEORH3Uy4S0lgny8C880KeJJxBLAN""\n"
"R2jlrP9/Y+7s2+ya4VOM240sDwKBgQDNh7q4YSqC7PnbL7fb6d1SgD+fXVH1h8rk""\n"
"WgksrQqIqJQ+0SKA2Bigkz4iK5bZn7duTD+RsK/r5nvU8YtNG2YD7GeJqj8rh73m""\n"
"gt3lZ+i9/6uR0xim+/llfr3qnVq5Vfgvhgp6LWyelLfqh+4MIz88DqjexfzvWuAc""\n"
"nN/5uJNH2QKBgQDwjDQoEuNpDSkpa7BS/zzG45gUf+n50SFqP1i/vGRxrVkmQ15x""\n"
"bYNDvoZe4yi7N476vPFaYpA69OiJCgvBPXdrNPBjON/D1ragGlUVMCDmxBQrQNqT""\n"
"fmAnHWZjYW0bqUf4M/aHgCT9WE4HMdOKc9AOon08HSuQ6JDJIqZ2gwymNQKBgQCf""\n"
"OP4zJrs7UIDECDSkfomCB27CdBYxY3CP9RxUav3VHtwxyeyz6jUx+L/S0vf7Qhtl""\n"
"rFY29K1k0FqwfiuPoaEnevY/FQ/5FiDMuidTOGt6/d2Zi/L2MhBkS4qvfhWxrOMn""\n"
"Ve0594TFWasdWw7Ugl3TlfvHEZTAjSM/p1xwZkhbCQKBgQC2hyzGS+Oo8dAVGQMp""\n"
"5LibHMV6qOAeLaPegtAjPqdUC4PTrwFpLQ5WRY0z1PAIMdz5iTp+39lcIslFnxiE""\n"
"9CiDkFxIK1ytU7HOUm85yGfZkjUEDzkgXNYI4kLg4+HYLpxT5iBcLg8X00vAwt7u""\n"
"olk4Pyl9Z6XFQwuCyBf5p1MB7A==""\n"
"-----END PRIVATE KEY-----";

const char pico_az_securityTypeEnvironmentVariable[] = "[IOTHUB_DEVICE_SECURITY_TYPE]"; // Input either 'connectionString' or 'DPS'

const char pico_az_connectionStringEnvironmentVariable[] = "[IOTHUB_DEVICE_CONNECTION_STRING]";

const char pico_az_dpsIdScopeEnvironmentVariable[] = "[IOTHUB_DEVICE_DPS_ID_SCOPE]";
