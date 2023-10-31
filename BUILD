load("@rules_cc//cc:defs.bzl", "cc_binary")
load("//:platform_transition.bzl", "device_cc_binary")

device_cc_binary(
    name = "app.elf",
    binary = "//src:device_application",
)

cc_binary(
    name = "host_build",
    visibility = ["//visibility:public"],
    deps = ["//src:main"],
)
