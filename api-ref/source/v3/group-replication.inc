.. -*- rst -*-

Group replication
=================

Lists targets, enables, disables, and fails over group replication.

Available since API microversion 3.38.


List replication targets
~~~~~~~~~~~~~~~~~~~~~~~~

.. rest_method::  POST /v3/{project_id}/groups/{group_id}/action

Lists replication targets for a group.

Normal response codes: 202
Error response codes: badRequest(400), itemNotFound(404)


Request
-------

.. rest_parameters:: parameters.yaml

   - project_id: project_id_path
   - group_id: group_id

Request Example
---------------

.. literalinclude:: ./samples/group-replication-list-targets.json
   :language: javascript

Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - backend_id: backend_id_target
   - unique_key: replication_targets_unique_key


Response Example
----------------

.. literalinclude:: ./samples/group-replication-target.json
   :language: javascript


Enable group replication
~~~~~~~~~~~~~~~~~~~~~~~~

.. rest_method::  POST /v3/{project_id}/groups/{group_id}/action

Enable replication for a group.

Normal response codes: 202
Error response codes: badRequest(400), itemNotFound(404)

Request
-------

.. rest_parameters:: parameters.yaml

   - project_id: project_id_path
   - group_id: group_id

Request Example
---------------

.. literalinclude:: ./samples/group-replication-enable.json
   :language: javascript

Disable group replication
~~~~~~~~~~~~~~~~~~~~~~~~~

.. rest_method::  POST /v3/{project_id}/groups/{group_id}/action

Disable replication for a group.

Normal response codes: 202
Error response codes: badRequest(400), itemNotFound(404)

Request
-------

.. rest_parameters:: parameters.yaml

   - project_id: project_id_path
   - group_id: group_id

Request Example
---------------

.. literalinclude:: ./samples/group-replication-disable.json
   :language: javascript

Failover replication
~~~~~~~~~~~~~~~~~~~~

.. rest_method::  POST /v3/{project_id}/groups/{group_id}/action

Failover a replicated group.

Normal response codes: 202
Error response codes: badRequest(400), itemNotFound(404)

Request
-------

.. rest_parameters:: parameters.yaml

   - project_id: project_id_path
   - group_id: group_id
   - allow_attached_volume: allow_attached_volume
   - secondary_backend_id: backend_id_target

Request Example
---------------

.. literalinclude:: ./samples/group-replication-failover.json
   :language: javascript
