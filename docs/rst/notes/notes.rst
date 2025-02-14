.. include:: ../exports/alias.include

.. _release_notes:

.. include:: forthcoming_version.rst

##############
Version v0.3.0
##############

This release includes the following **major changes**:

* New DDS Router library that provides the DDS Router features through a C++ API.
* Division of DDS Router application into several packages.

  - `ddsrouter_event`: C++ library which implements System Operating (SO)-dependent signal handlers.
  - `ddsrouter_utils`:  C++ library which implements various utility functions.
  - `ddsrouter_core`: C++ library which implements the DDS Router operation and exports the DDS Router C++ API.
  - `ddsrouter_yaml`:  C++ library to parse the DDS Router *yaml* configuration files.
  - `ddsrouter_tool`: DDS Router end-user application.
* New dynamic topic discovery feature to automatically discover DDS Topics in a DDS network.
* Allow using wildcard characters to define topics in ``allowlist`` and ``blocklist``.
* Build internal topic tracks via the ``builtin-topics`` configuration.


This release includes the following **Routing features**:

* Apply DDS Topic filtering rules using the ``allowlist`` and ``blocklist`` lists.


This release includes the following **User Interface features**:

* Upgrade the *yaml* configuration file to version 2.0 which breaks compatibility with version 1.0.
* Support for both version 1.0 and version 2.0 of the *yaml* configuration file, maintaining version 1.0 by default.
* Improve reporting of errors resulting from parsing a malformed *yaml* configuration file.


This release includes the following **Continuous-Integration features**:

* Add tests for the *yaml* parsing library (`ddsrouter_yaml`).
* Specific testing GitHub actions for each DDS Router package for both Windows and Linux platforms.


This release fixes the following **major bugs**:

* Fix deadlock between Track and Fast DDS Reader mutex.
* Support any size for in and out messages.


This release fixes the following **minor bugs**:

* Fix parsing of *reload-time* executable argument.
* Handle signals in dedicated threads to prevent hangs when terminating execution.
* Fix rare deadlock in EventHandler when destroying and callback called.


This release includes the following **Documentation features**:

* DDS Router execution from a provided Docker image.
* Update all examples of *yaml* configuration files to be consistent with the new *yaml* configuration version.
* High-level repository structure description and developer contribution guidelines.
* Improved and extended :ref:`topic_filtering` section according to the new dynamic topic discovery functionality.

#################
Previous Versions
#################

.. include:: previous_versions/v0.2.0.rst
.. include:: previous_versions/v0.1.0.rst
